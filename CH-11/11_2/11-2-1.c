#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int size,count=0;
    p("Enter size of string : ");
    s("%d",&size);
    char str[size];
    char *ptr[size];
    p("Enter your string : ");
    s("%s",&str);
    for (int i = 0; i<size; i++)
    {
        ptr[i] = &str[i];
    }
    for (int i = 0; i < size; i++)
    {
        count++;
    }
    p("Lenth of string : %d",count);
    return 0;
}
