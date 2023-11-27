#include <stdio.h>
#define p printf
#define s scanf

main()
{
    int n;
    p("Enter array size : ");
    s("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            p("a[%d][%d] : ",i,j);
            s("%d", &a[i][j]);
        }
        
    }

    int *ptr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ptr[i][j]=&a[i][j];
        }
        
    }
    

    p("\n\tCUBE of elements....\n\n");
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
        {
             p("%d ", (*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]) ); 
        }
    }
}