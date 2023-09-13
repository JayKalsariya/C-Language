#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	char a;
	clrscr();
	p("Enter a : ");
	s("%c",&a);

	if(a=='A' || a=='a'){
		p("This character is VOWEL");
	}
	else if(a=='E' || a=='e'){
		p("This character is VOWEL");
	}
	else if(a=='I' || a=='i'){
		p("This character is VOWEL");
	}
	else if(a=='O' || a=='o'){
		p("This character is VOWEL");
	}
	else if(a=='U' || a=='u'){
		p("This character is VOWEL");
	}
	else{
		p("This character is CONSONENT");
	}
	getch();

}