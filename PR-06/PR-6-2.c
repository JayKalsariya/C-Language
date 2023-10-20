#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf

int main()
{
    char a[50];
    p("Enter any srting : ");
    s("%s", &a);

    int k;

    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        k = 1;

        if (a[i] != '\0')
        {
            for (int j = i + 1; j < len; j++)
            {

                if (a[i] == a[j])
                {
                    k++;
                    a[j] = '\0';
                }
            }
            p("%c = %d\n", a[i], k);
        }
    }

    return 0;
}
