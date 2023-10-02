#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=5;i++){
		for(s=5;s>i;s--){
			p("  ");
		}
		for(j=1;j<=i;j++){
			p("* ");
		}
		for(j=i-1;j>=1;j--){
			p("* ");
		}
		p("\n");
	}
	getch();

}