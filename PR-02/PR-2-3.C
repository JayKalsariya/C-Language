#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c,d;
	clrscr();
	p("Enter Number A : ");
	s("%i",&a);
	p("Enter Number B : ");
	s("%i",&b);
	p("Enter Number C : ");
	s("%i",&c);
	p("Enter Number D : ");
	s("%i",&d);
	if(a>b){
		if(a>c){
			if(a>d){
				p("A is Maximum");
			}
			else{
				p("D is Maximum");
			}
		}
		else{
			if(c>d){
				p("C is Maximum");
			}
			else{
				p("D is Maximum");
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				p("B is Maximum");
			}
			else{
				p("D is Maximum");
			}
		}
		else{
			if(c>d){
				p("C is Maximum");
			}
			else{
				p("D is Maximum");
			}
		}
	}
	getch();

}