#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	char jay;
	clrscr();
	p("Enter any character : ");
	s("%c",&jay);
	if((jay>='A' && jay<='Z')||(jay>='a' && jay<='z')){
		p("It is Character");
	}
	else if(jay>='0' && jay<='9'){
		p("It is Number");
	}
	else{
		p("It is Special character");
	}
	getch();

}