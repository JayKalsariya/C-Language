#include<stdio.h>
#define p printf
#define s scanf

int arrayRev(int size, int j){
    int a[size], *ptr[size], **ptr2[size];
    for (int i = 0; i < size; i++)
    {
        p("a[%d] : ",i);
        s("%d",&a[i]);
    }
    for (int i = 0; i < size ; i++)
    {
        ptr[i] = &a[i];
    }
    for (int i = size-1; i >= 0 ; i--)
    {
        ptr2[j] = &ptr[i];
        j++;
    }
    p("Reverse Array.....\n\t=> ");
    for (int i = 0; i < size; i++)
    {
        p("%d, ",**ptr2[i]);
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
