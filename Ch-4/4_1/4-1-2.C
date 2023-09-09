#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main(){
	int a,b;
	clrscr();
	p("Enter any number : ");
	s("%d",&a);
	p("Enter any number : ");
	s("%d",&b);
	p("\n=> Arithmatic Operaters...\n");
	p("\n\n\tAddition\t: %d\n",a+b);
	p("\tSubstraction\t: %d\n",a-b);
	p("\tMultiplication\t: %d\n",a*b);
	p("\tDivision\t: %d\n",a/b);
	p("\tModules\t\t: %d\n",a%b);
	getch();
}