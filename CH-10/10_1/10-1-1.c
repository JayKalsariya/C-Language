#include<stdio.h>
#define p printf
#define s scanf

// UDFs

int cube(int n){
        return n*n*n;
    }

int main()
{
    int n;
    p("Enter any number : ");
    s("%d",&n);
    p("Cube of this number : %d",cube(n));
    return 0;
}
