#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int x,y;
	clrscr();
	p("Enter x : ");
	s("%d",&x);
	p("Enter y : ");
	s("%d",&y);

	p("\n\t(x-y)^2 = %d",(x*x)-(2*x*y)+(y*y));

	getch();

}