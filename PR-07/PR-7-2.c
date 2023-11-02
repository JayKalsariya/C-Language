#include <stdio.h>
#define p printf
#define s scanf

int bnr(int dn)
{
    int bn = 0, i = 1, rem;
    while (dn != 0)
    {
        rem = dn % 2;
        dn /= 2;
        bn += (rem * i);
        i *= 10;
    }
    return bn;
}

int main()
{
    int dn, ans;
    p("Enter any num : ");
    scanf("%d", &dn);
    p("Binary Number : %d",bnr(dn));
    return 0;
}
