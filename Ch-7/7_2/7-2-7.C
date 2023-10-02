#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j,s;
	clrscr();
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			p("%d ",j);
		}
		for(s=5;s>i;s--){
			p("    ");
		}
		for(j=i;j>=1;j--){
			p("%d ",j);
		}
		p("\n");
	}
	getch();

}