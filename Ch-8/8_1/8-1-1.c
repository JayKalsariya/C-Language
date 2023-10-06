#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n,i;
    p("Enter size of array : ");
    s("%d",&n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        p("a[%d] : ",i);
        s("%d",&a[i]);
    }

    p("lenth of an array : %d",n);
    
    return 0;
}
