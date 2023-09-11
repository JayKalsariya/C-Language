#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	float F,C;
	clrscr();
	p("Enter temprature in cellcius : ");
	s("%f",&C);
	F=(C*(9/5))+32;
	p("Enter temprature in ferhanhit : %.2f",F);
	getch();
}