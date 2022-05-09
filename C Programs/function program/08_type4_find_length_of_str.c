#include<stdio.h>
#include<string.h>
int strlength()
{
    char str[15];
    int len;
    printf("Enter any string: ");
    scanf("%s",str);
    len =strlen(str);
    return len;
}
void main()
{
    int l;
    system("cls");
    l=strlength();
    printf("length of string=%d",l);
}