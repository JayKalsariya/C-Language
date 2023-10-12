#include <stdio.h>
#define p printf
#define s scanf

int main()
{
    int r, c;
    p("Enter Row size : ");
    s("%d", &r);
    p("Enter Column size : ");
    s("%d", &c);

    p("\n======Array A======\n");
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            p("a[%d][%d] : ", i, j);
            s("%d", &a[i][j]);
        }
    }

    p("\n======Array B======\n");
    int b[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            p("b[%d][%d] : ", i, j);
            s("%d", &b[i][j]);
        }
    }

    p("\n======Sum Array C======\n");
    int C[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
          C[i][j] = a[i][j] + b[i][j];
          p("%d ", C[i][j]);
        }
        p("\n");
    }
    return 0;
}
