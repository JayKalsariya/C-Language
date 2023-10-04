#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
		   (i==1 || i==3 || j==1 || j==5)
					?p("* ")
					:p("  ");
		}
		p("\n");
	}
	getch();

}