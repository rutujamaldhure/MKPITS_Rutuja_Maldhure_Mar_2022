#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    system("cls");
    printf("Enter any string: ");
    scanf("%s",str);
    strlwr(str);
    printf("string in lower case: %s",str);
}