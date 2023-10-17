#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your Name : ");
    scanf("%[^\n]", &name);

    for (int i = 0; i < 30; i++)
    {
        if (name[0] >= 97 && name[0] <= 122)
        {
            name[0] -= 32;
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
    }

    printf("Titlecase name : %s", name);
    return 0;
}