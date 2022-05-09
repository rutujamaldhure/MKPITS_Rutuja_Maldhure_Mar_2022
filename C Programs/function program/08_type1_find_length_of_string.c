#include<stdio.h>
#include<string.h>
void strlength()
{
    char str[15];
    int len;
    printf("Enter any string: ");
    scanf("%s",str);
    len =strlen(str);
    printf("%d",len);
}
void main()
{
    system("cls");
    strlength();
}