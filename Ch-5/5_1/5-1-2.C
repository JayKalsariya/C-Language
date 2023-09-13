#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b;
	clrscr();
	p("Enter a : ");
	s("%d",&a);

	if(a>0){
		p("Number is POSITIVE");
	}
	else if(a<0){
		p("Number is NEGATIVE");
	}
	else if(a==0){
		p("Number is NEUTRAL");
	}
	else{
		p("Invalid Input !!");
	}
	getch();

}