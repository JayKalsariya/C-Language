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
	a=a+b;
	b=a-b;
	a=a-b;
	p("a : %d\n",a);
	p("b : %d",b);
	getch();

}