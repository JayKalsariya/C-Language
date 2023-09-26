#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j;
	clrscr();
	for(i=65;i<=69;i++){
		for(j=i;j>=65;j--){
			p("%c ",j);
		}
		p("\n");
	}
	getch();

}