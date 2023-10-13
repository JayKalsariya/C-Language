#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int a[5][5];
    p("\n------Enter Elements of array------\n");
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            p("a[%d][%d] : ",i,j);
            s("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            (i==0||j==0||i==4||j==4)
                    ?p("%d ",a[i][j])
                    :p("  ");
        }
        p("\n");
    }
    
    return 0;
}
