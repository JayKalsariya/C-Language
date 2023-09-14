#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c,d;
	clrscr();

	p("Enter a : ");
	s("%d",&a);
	p("Enter b : ");
	s("%d",&b);
	p("Enter c : ");
	s("%d",&c);
	p("Enter d : ");
	s("%d",&d);

	if(a==b && a==c && a==d && b==c && b==d && c==d)
	{
		p("All are same !!");
	}
	else if(a==b)
	{
		if(a<c)
		{
			if(a<d)
			{
				p("a & b are small");
			}
			else
			{
				p("d is small");
			}
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
			if(a<d)
			{
				p("a & c are small");
			}
			else
			{
				p("d is small");
			}
		}
		else
		{
			p("b is small");
		}
	}
	else if(a==d)
	{
		if(a<b)
		{
			if(a<c)
			{
				p("a & d are small");
			}
			else
			{
				p("c is small");
			}
		}
		else
		{
			p("b is small");
		}
	}
	else if(b==c)
	{
		if(b<a)
		{
			if(b<d)
			{
				p("b & c are small");
			}
			else
			{
				p("d is small");
			}
		}
		else
		{
			p("a is small");
		}
	}
	else if(b==d)
	{
		if(b<a)
		{
			if(b<c)
			{
				p("b & d are small");
			}
			else
			{
				p("c is small");
			}
		}
		else
		{
			p("a is small");
		}
	}
	else if(c==d)
	{
		if(c<a)
		{
			if(c<b)
			{
				p("c & d are small");
			}
			else
			{
				p("b is small");
			}
		}
		else
		{
			p("a is small");
		}
	}
	else if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				p("a is small");
			}
			else
			{
				p("d is small");
			}
		}
		else if(c<d)
		{
			p("c is small");
		}
		else
		{
			p("d is small");
		}
	}
	else if(b<c)
	{
		if(b<d)
		{
			p("b is small");
		}
		else
		{
			p("d is small");
		}
	}
	else if(c<d)
	{
		p("c is small");
	}
	else
	{
		p("d is small");
	}

	getch();

}