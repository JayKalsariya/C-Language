#include<stdio.h>
#define p printf
#define s scanf

void stringIn(char a[]){
    p("Enter any string : ");
    for (int i = 0; a[i] != NULL; i++)
    {
        s("%[^\n]",&a[i]);
    }
    
}
int stringlen(char a[]){
    int num=0;
    stringIn(a);
    for (int i = 0; a[i] != NULL; i++)
        num++;
    return num;
}

int main()
{
    char a[50];
    int len=stringlen(a);
    p("Lenth Of This string : %d",len);
    return 0;
}
