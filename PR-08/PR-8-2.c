#include <stdio.h>
#define p printf
#define s scanf

void arraycube(int n,int *ptr[n][n]){
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            p("a[%d][%d] : ",i,j);
            s("%d", &a[i][j]);
        }
        
    }

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

main()
{
    int n;
    p("Enter array size : ");
    s("%d", &n);
    int *ptr[n][n];
    arraycube(n,*ptr);
}