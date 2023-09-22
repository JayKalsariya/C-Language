#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int n,f,l,sum=0;
	clrscr();
	p("Enter any number : ");
	scanf("%d",&n);
	l=n%10;
	f=n;
	while(n>=10)
	{
		n/=10;
	}
	f=n;
	sum=f+l;
	p("Sum of first & last number : %d ",sum);
	getch();
}