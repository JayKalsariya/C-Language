#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j,num=1;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			p("%d ",num++);
		}
		p("\n");
	}
	getch();

}