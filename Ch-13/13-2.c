#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    FILE *fp;
    fp = fopen("demo2.txt","w");
    for (int i = 1; i <= 50; i++)
    {
        if (i%3==0 && i%5==0)
        {
            fprintf(fp,"%d, ",i);
        }
    }
    fclose(fp);
    return 0;
}
