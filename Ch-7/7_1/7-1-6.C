#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			(j%2==0)
				?p("0 ")
				:p("1 ");
		}
		p("\n");
	}
	getch();

}