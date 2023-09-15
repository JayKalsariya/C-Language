#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c;
	clrscr();
	p("Enter a : ");
	s("%d",&a);
	p("Enter b : ");
	s("%d",&b);
	p("Enter c : ");
	s("%d",&c);

	(a<b)
	    ?(a<c)
		? p("a is small")
		: p("c is small")
	    :(b<c)
		? p("b is small")
		: p("c is small");
	getch();

}