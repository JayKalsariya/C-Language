#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("EVEN-NUM.txt","w");
    fp2 = fopen("ODD-NUM.txt","w");
    for (int i = 50; i <= 70; i++)
    {
        (i%2==0)
            ?fprintf(fp1,"%d, ",i)
            :fprintf(fp2,"%d, ",i);
    }
    
    return 0;
}
