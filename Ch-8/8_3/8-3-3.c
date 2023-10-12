#include <stdio.h>
#define p printf
#define s scanf

int main()
{
    int r;
    p("Enter Row & column size : ");
    s("%d", &r);
    
    p("\n======Array A======\n");
    int a[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            p("a[%d][%d] : ", i, j);
            s("%d", &a[i][j]);
        }
    }

   
    p("\n======Sum of diagonal elements======\n");
    int sum=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
          if(i==j){
            sum+=a[i][j];
          }
        }
        p("\n");
    }
    p("Sum : %d",sum);
    return 0;
}
