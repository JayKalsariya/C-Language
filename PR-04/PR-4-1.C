#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j;
	clrscr();
	for(i=41;i<=45;i++){
		for(j=41;j<=i;j++){
		   p("%d ",j);
		}
		p("\n");
	}
	getch();

}