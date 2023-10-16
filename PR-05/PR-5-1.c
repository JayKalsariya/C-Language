#include<stdio.h>
#define p printf
#define s scanf

main(){
	int n;
	
	p("Enter size of array : ");
	s("%d",&n);
	
	int i,a[n];
	for(i=0;i<n;i++){
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	p("Negative number from an array...\n");
	for(i=0;i<n;i++){
		if(a[i]<0){
			p("%d, ",a[i]);
		}
	}
}
