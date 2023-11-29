#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n,fact=1;
    p("Enter n : ");
    s("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    p("FACTORIAL OF %d : %d",n,fact);
    return 0;
}
