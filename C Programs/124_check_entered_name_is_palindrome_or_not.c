#include<stdio.h>
#include<string.h>
void main()
{
    char name[20],backup[20];
    int s;
    system("cls");
    printf("Enter any name: ");
    scanf("%s",name);
    strcpy(backup,name);
    strrev(name);
    s=strcmp(name,backup);

    if(s==0)
    printf("Entered name is palindrome");
    else
    printf("Entered name is not palindrome");
}