#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    system("cls");
    printf("Enter any string: ");
    scanf("%s",str);
    strupr(str);
    printf("string in upper case: %s",str);
}