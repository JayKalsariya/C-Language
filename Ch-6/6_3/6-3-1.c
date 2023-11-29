#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n,sum=0;
    p("Enter n : ");
    s("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }

    p("SUM OF 1 TO %d NUMBER : %d",n,sum);
    
    return 0;
}
