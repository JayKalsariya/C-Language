#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int y1,y2;
	clrscr();
	p("Enter any FIRST year : ");
	s("%d",&y1);
	p("Enter any SECOND year : ");
	s("%d",&y2);
	p("\n====================\n");
	p("LEAP YEAR SEQUENCE\n");
	p("====================\n\n");
	while(y1<=y2){
		if(y1%4==0)
			p("%d ",y1);
		y1++;
	}
	getch();

}