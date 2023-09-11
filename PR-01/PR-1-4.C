#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int n;
	clrscr();
	p("Enter number : ");
	s("%d",&n);
	p("%d * 1 = %d\n",n,n*1);
	p("%d * 2 = %d\n",n,n*2);
	p("%d * 3 = %d\n",n,n*3);
	p("%d * 4 = %d\n",n,n*4);
	p("%d * 5 = %d\n",n,n*5);
	p("%d * 6 = %d\n",n,n*6);
	p("%d * 7 = %d\n",n,n*7);
	p("%d * 8 = %d\n",n,n*8);
	p("%d * 9 = %d\n",n,n*9);
	p("%d * 10 = %d",n,n*10);
	getch();

}