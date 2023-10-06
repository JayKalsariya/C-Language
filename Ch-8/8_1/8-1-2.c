#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n,i,sum=0;
    p("Enter size of array : ");
    s("%d",&n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        p("a[%d] : ",i);
        s("%d",&a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum+=a[i];
    }

    p("Average of array : %.2f",(float)sum/n);
    
    return 0;
}