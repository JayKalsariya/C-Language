#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    char a[20], b[20];
    p("Enter string 1 : ");
    s("%s",&a);
    p("Enter string 2 : ");
    s("%s",&b);

    int l1=0, l2=0, j=0;
    for (int i = 0; a[i] != NULL; i++)
    {
        l1++;
    }
    for (int i = 0; b[i] != NULL; i++)
    {
        l2++;
    }
    for (int i = 0; i < l1; i++)
    {
        if (l1 == l2)
        {
            if (a[i] == b[j])
            {
                j++;
            }
        }
        else{
            p("This is not same");
        }
    }
    (j == l1)
        ? p("This is same")
        : p("This is not same");

    return 0;
}
