#include <stdio.h>
#define p printf
#define s scanf

void arrayIn(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p("a[%d] : ", i);
        s("%d", &a[i]);
    }
}

int arraySum(int a[], int n)
{
    arrayIn(a, n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    p("\n\tSUM : %d", sum);
    return sum;
}

int main()
{
    int n;
    p("Enter size : ");
    s("%d", &n);

    int a[n];
    arraySum(a, n);
}
