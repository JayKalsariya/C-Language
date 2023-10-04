#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j,num=11;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			p("%d ",num);
			num++;
		}
		p("\n");
	}

	getch();

}