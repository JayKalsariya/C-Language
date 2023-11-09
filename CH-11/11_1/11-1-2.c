#include<stdio.h>
#define p printf
#define s scanf

void swapoint(){
	int a,b,c=0;
	p("\n\tBefore Swapping....\n");
	p("Enter a : ");
	s("%d",&a);
	p("Enter b : ");
	s("%d",&b);
	
	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	
	c=*ptr1;
	*ptr1=*ptr2;
	*ptr2=c;
	
	p("\n\tAfter Swapping....");
	p("\na : %d\n",a);
	p("b : %d",b);
}

main(){
	swapoint();
}