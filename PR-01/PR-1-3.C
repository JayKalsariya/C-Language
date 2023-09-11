#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c;
	clrscr();
	p("First angle : ");
	s("%d",&a);
	p("Second angle : ");
	s("%d",&b);
	c=180-(a+b);
	p("Third angle : %d",c);
	getch();

}