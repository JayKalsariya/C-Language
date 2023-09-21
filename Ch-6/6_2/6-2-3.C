#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int i=1,n;
	clrscr();
	p("Enter any number : ");
	s("%d",&n);
	do
	{
		if(i%2==0){
			p("%d ",i);
		}
		i++;
	}while(i<=n);
	getch();

}
