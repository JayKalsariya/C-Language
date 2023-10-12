#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int as;
    p("Enter array A size : ");
    s("%d",&as);
    p("\narray a elements=======\n");
    int a[as];
    for (int i = 0; i < as; i++)
    {
        p("a[%d] : ",i);
        s("%d",&a[i]);
    }

    int bs;
    p("Enter array B size : ");
    s("%d",&bs);
    p("\narray b3 elements=======\n");
    int b[bs];
    for (int i = 0; i < bs; i++)
    {
        p("b[%d] : ",i);
        s("%d",&b[i]);
    }

    int c[as+bs]; 
    for (int i = 0; i < as; i++)
    {
        c[i]=a[i];
    }
 
    for (int i = 0; i < bs; i++)
    {
        c[i+as]=b[i];
    }  
 
    p("\n======mearge array c======\n");
    for (int i = 0; i < as+bs; i++)
    {
        p("%d ",c[i]);
    }
    return 0;
}
