#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n;
    p("Enter n : ");
    s("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        p("%d * %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
