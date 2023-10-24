#include<stdio.h>
#define p printf
#define s scanf

// UDFs

void statement(int n){
        if(n%3==0 && n%5==0){
            p("This number is divisible by both 3 & 5");
        }	
        else if(n%3==0){
            p("This number is divisible by only 3\nBut not divisible by both 3 & 5");
        }	
        else if(n%5==0){
            p("This number is divisible by only 5\nBut not divisible by both 3 & 5");
        }	
        else{
            p("This number is not divisible by both 3 & 5");
        }
    }

int main()
{
    int n;
    p("Enter any number : ");
    s("%d",&n);
    statement(n);
    return 0;
}
