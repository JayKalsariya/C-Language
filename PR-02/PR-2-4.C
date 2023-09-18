#include<stdio.h>
#include<conio.h>
#define p printf

main()
{
	char Day;
	clrscr();
	p("\nM  : Monday");
	p("\nT  : Tuesday");
	p("\nW  : Wednesday");
	p("\nt  : Thursday");
	p("\nF  : Friday");
	p("\nS  : Saturday");
	p("\ns  : Sunday");
	p("\nEnter your choise : ");
	scanf("%c",&Day);
	switch(Day){
		case 'M' :
			p("Monday");
			break;
		case 'T' :
			p("Tuseday");
			break;
		case 'W' :
			p("Wednesday");
			break;
		case 't' :
			p("Thurseday");
			break;
		case 'F' :
			p("Friday");
			break;
		case 'S' :
			p("Saturday");
			break;
		case 's' :
			p("Sunday");
			break;
		default:
			p("Invalid Input");
	}
	getch();

}