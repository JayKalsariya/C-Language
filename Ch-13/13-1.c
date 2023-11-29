#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    FILE *fp;
    fp = fopen("demo.txt","w");
    fprintf(fp,"Hello Programmer...!!");
    fclose(fp);
    return 0;
}
