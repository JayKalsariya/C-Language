#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    int l1=0,l2=0,count1=0,count2=0;
    char e1[20]="admin123@gmail.com", e2[20], P1[15]="12345678", P2[15];
    
    p("enter email : ");
    s("%s",&e2);
    p("enter password : ");
    s("%s",&P2);

    for (int i = 0; e1[i] != NULL; i++)
    {
        l1++;
    }
    for (int i = 0; P1[i] != NULL; i++)
    {
        l2++;
    }
    
    for (int i = 0; i < l1; i++)
    {
            if (e1[i]==e2[i])
            {
                count1++;
            }
    }

    for (int i = 0; i < l2; i++)
    {
            if (P1[i]==P2[i])
            {
                count2++;
            }
    }

    ((count1 == l1) && (count2 == l2))
        ?p("\n\tLOGIN SUCCESSFULL !!")
        :p("\n\tLOGIN INVALID !!");

    return 0;
}
