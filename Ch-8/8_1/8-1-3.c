#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n,i;
    p("Enter size of array : ");
    s("%d",&n);

    int A[n],B[n],C[n];

    p("\n-----------array A-----------\n");
    for (i = 0; i < n; i++)
    {
        p("A[%d] : ",i);
        s("%d",&A[i]);
    }

    p("\n-----------array B-----------\n");
    for (i = 0; i < n; i++)
    {
        p("B[%d] : ",i);
        s("%d",&B[i]);
    }

    p("\n-----------array C-----------\n");
    for (i = 0; i < n; i++)
    {
        C[i]=A[i]+B[i];
        p("C[%d] : %d\n",i,C[i]);
    }
    
    return 0;
}