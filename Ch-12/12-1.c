#include<stdio.h>
#define p printf
#define s scanf

struct student
{
    int id,age,standard;
    char name[50],course[50],city[50],school[50];
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
        s("%[^\n]",&obj[i].course);
        p("CITY\t: ");
        fflush(stdin);
        s("%s",&obj[i].city);
        p("STANDARD\t: ");
        s("%d",&obj[i].standard);
        p("SCHOOL\t: ");
        fflush(stdin);
        s("%s",&obj[i].school);
    }

    p("---------------------------------------------------------------\n");
    p(" ID\tNAME\tAGE\tCOURSE \tCITY\tSTANDARD\tSCHOOL\n");
    p("---------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        p(" %d\t%s\t%s\t%s\t%d\t%s\n",obj[i].id,obj[i].name,obj[i].course,
            obj[i].city,obj[i].standard,obj[i].school);
    }
    p("---------------------------------------------------------------\n");
        
    return 0;
}
