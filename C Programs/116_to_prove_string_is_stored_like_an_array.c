#include<stdio.h>
void main()
{
    char name[10],i;
    system("cls");
    printf("Enter name ");
    scanf("%s",name);
    for(i=0; name[i]!='\0'; i++)
    {
        printf("%c",name[i]);
    }
}