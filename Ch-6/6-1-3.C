#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i=1,n;
	clrscr();
	p("Enter any number : ");
	s("%d",&n);
	p("\n====================\n");
	p("YOUR NUMBER SEQUENCE\n");
	p("====================\n\n");
	while(i<=n)
		p("%d ",i++);
	getch();

}