#include<stdio.h>
#define p printf
#define s scanf

int loop(int n, int i, int sum){
	if(i<=n){
		sum+=i;
		i++;
		loop(n, i, sum);	
	}
	else{
		return sum;
	}
}

main(){
	
	int n, sum=0, i=1;
	p("Enter n : ");
	s("%d",&n);
	p("SUM OF 1 TO %d : %d",n,loop(n,i,sum));
}
