#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int j;
	clrscr();
	p("Enter any Number : ");
	s("%d",&j);
	(j%2==0)
		? p("This Number is Even")
		: p("This Number is Odd");
	getch();

}