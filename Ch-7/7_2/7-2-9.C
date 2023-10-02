#include<stdio.h>
#include<conio.h>
#define p printf
main()
{
	int i,j,s;
	clrscr();
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			p("%d ",j);
		}
		p("\n");
	}
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			p("%d ",j);
		}
		p("\n");
	}
	getch();

}