#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	float e;
	clrscr();
	printf("Bag : ");
	scanf("%d",&a);
	printf("laptop : ");
	scanf("%d",&b);
	printf("perfume : ");
	scanf("%d",&c);
	printf("ammount : %d\n",a+b+c);
	printf("Bill : %.2f",(float)(a+b+c)+(float)(a+b+c)*0.18);
	getch();
}
