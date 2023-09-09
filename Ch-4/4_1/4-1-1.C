#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b;
	clrscr();
	p("Enter any number : ");
	s("%d",&a);
	p("Increment :\n");
	p("\tPre = %d\n",++a);
	p("\tPost = %d\n",a++);
	p("Enter any number : ");
	s("%d",&b);
	p("Decrement :\n");
	p("\tPre = %d\n",--b);
	p("\tPost = %d\n",b--);
	getch();

}