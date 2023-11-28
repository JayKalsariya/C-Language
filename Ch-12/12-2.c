#include<stdio.h>
#define p printf
#define s scanf

struct student
{
    int id,age,experience;
    char name[50],role[50],city[50],company_name[50];
};

int main()
{
    int n;
    p("Enter number of student : ");
    s("%d",&n);
    struct student obj[n];
    for (int i = 0; i < n; i++)
    {
        p("ID\t: ");
        s("%d",&obj[i].id);
        p("NAME\t: ");
        fflush(stdin);
        s("%s",&obj[i].name);
        p("AGE\t: ");
        s("%d",&obj[i].age);
        p("COURSE\t: ");
        fflush(stdin);
        s("%[^\n]",&obj[i].role);
        p("CITY\t: ");
        fflush(stdin);
        s("%s",&obj[i].city);
        p("STANDARD\t: ");
        s("%d",&obj[i].experience);
        p("company_name\t: ");
        fflush(stdin);
        s("%s",&obj[i].company_name);
    }

    p("---------------------------------------------------------------\n");
    p(" ID\tNAME\tAGE\tCOURSE \tCITY\tSTANDARD\tSCHOOL\n");
    p("---------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        p(" %d\t%s\t%s\t%s\t%d\t%s\n",obj[i].id,obj[i].name,obj[i].role,
            obj[i].city,obj[i].experience,obj[i].company_name);
    }
    p("---------------------------------------------------------------\n");
        
    return 0;
}
