#include<stdio.h>
void main()
{
    char a,b,c;
    printf("enter three character: ");
    scanf("%c %c %c",&a,&b,&c);
    printf("reverse of %c%c%c is %C%c%c",a,b,c,c,b,a);
}