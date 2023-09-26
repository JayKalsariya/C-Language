#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--){
		for(j=i;j<=5;j++){
			p("%d ",i);
		}
		p("\n");
	}
	getch();

}