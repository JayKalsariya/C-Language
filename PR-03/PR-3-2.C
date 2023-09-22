#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int n,i,digit=0;
	clrscr();
	p("Enter any number : ");
	s("%d",&n);
	while(n!=0)
	{
		n/=10;
		digit++;
	}
	p("Digits Of Your Number : %d ",digit);
	getch();
}