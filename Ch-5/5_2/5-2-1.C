#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c;
	clrscr();
	p("Enter a : ");
	s("%d",&a);
	p("Enter b : ");
	s("%d",&b);
	p("Enter c : ");
	s("%d",&c);

	if(a==b && b==c && a==c)
	{
		p("All are same !!");
	}
	else if(a==b)
	{
		if(a<c)
		{
			p("A and B are small");
		}
		else
		{
			p("C is small");
		}
	}
	else if(a==c)
	{
		if(a<b)
		{
			p("A and C are small");
		}
		else
		{
			p("B is small");
		}
	}
	else if(b==c)
	{
		if(b<a)
		{
			p("B and C are small");
		}
		else
		{
			p("A is small");
		}
	}
	else if(a<b)
	{
		if(a<c)
		{
			p("a is small");
		}
		else
		{
			p("c is small");
		}
	}
	else
	{
		if(b<c)
		{
			p("b is small");
		}
		else
		{
			p("c is small");
		}
	}

	getch();

}