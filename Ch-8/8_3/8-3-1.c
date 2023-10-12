#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int r,c;
    p("Enter Row size : ");
    s("%d",&r);
    p("Enter Column size : ");
    s("%d",&c);

    int a[r][c],sum=0,n;
    for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			p("a[%d][%d] : ",i,j);
			s("%d",&a[i][j]);
            sum+=a[i][j];
		}
		p("\n");
	}
    n=r*c;
    p("Average of all elements : %.2f",(float)sum/n);
    return 0;
}
