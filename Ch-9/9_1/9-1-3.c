#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your Name : ");
    scanf("%[^\n]", &name);

    for (int i = 0; i < 30; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
    }

    printf("TogGle NaMe : %s", name);
    return 0;
}