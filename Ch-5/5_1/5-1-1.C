#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b;
	clrscr();
	p("Enter a : ");
	s("%d",&a);
	p("Enter b : ");
	s("%d",&b);
	if(a<b){
		p("a is minimum");
	}
	else if(a==b){
		p("both are same");
	}
	else{
		p("b is minimum");
	}
	getch();

}