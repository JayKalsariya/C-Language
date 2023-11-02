#include<stdio.h>
#define p printf
#define s scanf

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mult(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int modulus(int a, int b){
    return a%b;
}

void calc(a, b){
    int n,ans;
    tmp:
    p("\n1. For +\n");
    p("2. For -\n");
    p("3. For *\n");
    p("4. For /\n");
    p("5. For %%\n");
    p("0. For Exit\n");
    p("\nEnter Your Choice : ");
    s("%d",&n);

    switch (n)
    {
    case 1:
       ans=sum(a,b);
       p("%d",ans);
        goto tmp;
    
    case 2:
       ans=sub(a,b);
       p("%d",ans);
        goto tmp;

    case 3:
       ans=mult(a,b);
       p("%d",ans);
        goto tmp;

    case 4:
       ans=div(a,b);
       p("%d",ans);
        goto tmp;

    case 5:
       ans=modulus(a,b);
       p("%.2f",(float)ans);
        goto tmp;
        
    case 0:
        break;

    default:
        p("\n\tInvalid Input\n");
        break;
    }
}

int main()
{
    int a,b;    
    p("Enter a : ");
    s("%d",&a);    
    p("Enter b : ");
    s("%d",&b);
    calc(a,b);
    return 0;
}