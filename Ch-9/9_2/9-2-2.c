#include<stdio.h>
#define p printf
#define s scanf

int main()
{
    char e1[20]="admin123@gmail.com", e2[20], P1[15]="12345678", P2[15];
    int l1,l2,count1=0,count2=0;
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
        for (int j = 0; j < l1; j++)
        {
            if (e1[i]==e2[j])
            {
                count1++;
            }
            
        }
        
    }
    p("\n%d",count1);
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l1; j++)
        {
            if (P1[i]==P2[j])
            {
                count2++;
            }
            
        }
        
    }

    (count1 == l1-1 && count2 == l2-1)
        ?p("LOGIN SUCCESSFULL !!")
        :p("LOGIN INVALID !!");

    return 0;
}
