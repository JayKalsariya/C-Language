#include<stdio.h>
#define p printf
#define s scanf

struct details
{
    int rn, chem_m, maths_m, phy_m;
    char name[30];
};

struct marks{
    int total;
    float per;
};

int main()
{
    int n;
    p("Enter number of student : ");
    s("%d",&n);
    struct details obj[n];
    struct marks obj2[n];

    for (int i = 0; i < n; i++)
    {
        p("Roll no\t: ");
        s("%d",&obj[i].rn);
        p("Name\t: ");
        fflush(stdin);
        s("%[^\n]",&obj[i].name);
        p("Chemistry\t: ");
        s("%d",&obj[i].chem_m);
        p("Maths\t: ");
        s("%d",&obj[i].maths_m);
        p("Physics\t: ");
        s("%d",&obj[i].phy_m);
    }

    for (int i = 0; i < n; i++)
    {
        obj2[i].total = obj[i].chem_m + obj[i].maths_m + obj[i].phy_m;
    }
    for (int i = 0; i < n; i++)
    {
        obj2[i].per = obj2[i].total/3;
    }
   

    p("-------------------------------------------------------------------------\n");
    p(" Roll no.   Name\tChem\tMaths\tPhysics\tTotal\tPercentage\n");
    p("-------------------------------------------------------------------------\n");
    
    for (int i = 0; i < n; i++)
    {
        p("   %d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",obj[i].rn,obj[i].name,obj[i].chem_m,obj[i].maths_m,
            obj[i].phy_m,obj2[i].total,obj2[i].per);
    }
    p("-------------------------------------------------------------------------\n");

    return 0;
}
