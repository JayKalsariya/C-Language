#include<stdio.h>
#define p printf
#define s scanf

main(){
    char name[20], rev[20];
    p("Enter any string : ");
    s("%s",&name);

    int j=0, a=0, len=0;
    for (int i = 0; name[i] != NULL ; i++)
        len++;

    for (int i = 0; i < len; i++)
    {
        rev[j] = name[i];
        j++;
    }
    for (int i = 0; i < len; i++)
    {
        if(rev[i] == name[i])
            a++;
            
    }
    (a==len)
        ? p("This string is palindrome !!")
        : p("This string is not palindrome !!");
     
}