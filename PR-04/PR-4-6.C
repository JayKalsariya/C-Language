#include<stdio.h>
#include<conio.h>
#define p printf

main()
{
	int i,j,s;
	clrscr();
	for(i=5;i>=1;i--){
		for(s=1;s<=i-1;s++){
			p("  ");

		}
		for(j=i;j<=5;j++){
			p("%d ",j);
		}
		for(j=4;j>=i;j--){
			p("%d ",j);
		}

		p("\n");
	}
	getch();
}