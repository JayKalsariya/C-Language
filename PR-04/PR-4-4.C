#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i,j,s,space=0;
	clrscr();
	for(i=1;i<=5;i++){
		for(s=1;s<=space;s++){
			p("  ");
		}
		space++;
		for(j=5;j>=i;j--){
			(j%2==0)
			   ?p("0 ")
			   :p("1 ");
		}
		p("\n");
	}

	getch();

}