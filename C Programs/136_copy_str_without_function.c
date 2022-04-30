#include<stdio.h>
void main ()
{
    char str1[20], str2[20];
    int i, l=0;
    system("cls");
    printf("Enter string to copy: ");
    scanf("%s",str1);
    for(i=0; str1[i]!='\0'; i++)
    {
        l=l+1;
    }
    for(i=0; i<=l; i++)
    {
        str2[i]=str1[i];
    }
    printf("%s",str2);
    
}