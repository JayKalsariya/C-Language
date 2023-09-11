#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int B;
	float H,D,T,G;
	clrscr();
	p("Enter your base salary : ");
	s("%d",&B);
	H=B*0.1;
	D=B*0.05;
	T=B*0.08;
	G=B+H+D+T;
	p("Your gross salary : %.2f",G);
	getch();

}