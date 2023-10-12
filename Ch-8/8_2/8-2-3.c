#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int size;
    p("Enter array size : ");
    s("%d",&size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        p("a[%d] : ",i);
        s("%d",&a[i]);
    }
    p("\n======SQUARE ELEMENTS======\n");
    for (int i = 0; i < size; i++)
    {
        p("%d ",a[i]*a[i]);
    }
    
    return 0;
}
