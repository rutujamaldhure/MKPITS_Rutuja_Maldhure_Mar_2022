#include<stdio.h>
#include<string.h>
void strlength(char word[])
{
    int len;
    len =strlen(word);
    printf("%d",len);
}
void main()
{
    char str[15];
    system("cls");
    printf("Enter any string: ");
    scanf("%s",str);
    strlength(str);
}