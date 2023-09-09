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

	p("\n\t(x+y)^3 = %d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));

	getch();

}