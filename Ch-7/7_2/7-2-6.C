#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=5;i++){
		for(s=1;s<i;s++){
			p("  ");
		}
		for(j=5;j>=i;j--){
			p("%d ",j);
		}
		p("\n");
	}
	getch();
}