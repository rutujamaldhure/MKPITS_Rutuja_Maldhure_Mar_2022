#include<stdio.h>
#include<string.h>
int strlength(char word[])
{
    int len;
    len =strlen(word);
    return len;
}
void main()
{
    char str[15],l;
    system("cls");
    printf("Enter any string: ");
    scanf("%s",str);
    l=strlength(str);
    printf("length of string=%d",l);
}