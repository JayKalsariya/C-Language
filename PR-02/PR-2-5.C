#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int U;
	float bill;
	clrscr();
	p("Enter your bill UNIT : ");
	s("%d",&U);
	if(U>0 && U<=50){
		bill=(U*0.50)*0.2;
		p("Your bill Amount :%.2f",bill);
	}
	else if(U>=51 && U<=150){
		bill=(U-50)*0.75+25;
		bill*=0.2;
		p("Your bill Amount :%.2f",bill);
	}
	else if(U>=151 && U<=250){
		bill=(U-150)*1.20+100;
		bill*=0.2;
		p("Your bill Amount :%.2f",bill);
	}
	else if(U>=251){
		bill=((U-250)*1.50)+220;
		bill*=0.2;
		p("Your bill Amount :%.2f",bill);
	}
	else{
		p("Invalid input");
	}
	getch();

}