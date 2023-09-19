#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main(){
	int a=1,n;
	clrscr();
	p("Enter any number : ");
	s("%d",&n);
	while(a<=n){
		if(n%2==1){
			p("%d ",n);
		}
		n--;
	}
	getch();
}