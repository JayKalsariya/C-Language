#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			p("%d ",j);
		}
		p("\n");
	}
	getch();

}