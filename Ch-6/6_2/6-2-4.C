#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int n,i,n1=0,n2=1,n3;
	clrscr();
	p("Enter any number : ");
	s("%d",&n);
	p("\nFIBONACCI SERIES : \n");
	for(i=0;i<=n;i++){
		p("%d ",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	getch();

}
