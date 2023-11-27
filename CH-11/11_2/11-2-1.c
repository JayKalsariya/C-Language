#include<stdio.h>
#define p printf
#define s scanf

int arrayRev(int size, int j){
    int a[size], *ptr[size];
    for (int i = 0; i < size; i++)
    {
        p("a[%d] : ",i);
        s("%d",&a[i]);
    }
    for (int i = size-1; i >=0 ; i--)
    {
        ptr[j] = &a[i];
        j++;
    }
    p("Reverse Array.....\n\t=> ");
    for (int i = 0; i < size; i++)
    {
        p("%d, ",*ptr[i]);
    }
}


int main()
{
    int size,j=0;
    p("Enter array size : ");
    s("%d",&size);
    arrayRev(size, j);

    return 0;
}
