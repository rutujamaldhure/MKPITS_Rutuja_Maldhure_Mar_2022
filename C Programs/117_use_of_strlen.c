#include<stdio.h>
#include<string.h>
void main()
{
    char str[15];
    int len;
    system("cls");
    printf("Enter any string: ");
    scanf("%s",str);
    len =strlen(str);
    printf("%d",len);
}