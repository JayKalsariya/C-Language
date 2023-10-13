#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int n1,n2;
    p("Enter first year : ");
    s("%d",&n1);
    p("Enter second year : ");
    s("%d",&n2);

    int n=0,a[n2-n1];

   
        for (int j = n1; j <= n2; j++)
        {
            if (j%4==0)
            {
                a[n] = j;
                n++;
            } 
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d\n",a[i]);
        }
        
    return 0;
}
