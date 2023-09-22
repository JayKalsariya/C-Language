#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	char A='a';
	clrscr();
	do
	{
		p("%c ",A);
		A+=4;
	}while(A<='z');
	getch();
}