#include <stdio.h>
#define p printf
#define s scanf

int main()
{
    int len=0, u = 0, l = 0, sy=0, d=0;
    char pass[20];
    p("Enter your password : ");
    s("%[^\n]", &pass);
    for (int i = 0; pass[i] != NULL; i++)
    {
        len++;
    }
    
        if (len>=6)
        {
            for (int i = 0; i < len; i++)
            {
                if (pass[i]>=65 && pass[i]<=90)
                {
                    u++;
                }
                else if (pass[i]>=97 && pass[i]<=122)
                {
                    l++;
                }
                else if (pass[i]>=33 && pass[i]<=47 || pass[i]>=58 && pass[i]<=64)
                {
                    sy++;
                }
                else if (pass[i]>=48 && pass[i]<=57)
                {
                    d++;
                }
            }
            (u>=1 && l>=1 && sy>=1 && d>=1)
                ?p("YOUR PASSWORD IS STRONG %c !!",1)
                :p("YOUR PASSWORD IS NOT STRONG !!");
        }
        else{
            p("YOUR PASSWORD IS NOT STRONG !!");
        }

    return 0;
}