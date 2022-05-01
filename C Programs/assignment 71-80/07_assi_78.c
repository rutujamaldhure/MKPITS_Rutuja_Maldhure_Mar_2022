#include<stdio.h>
void main()
{
    int num;
    system("cls");
    printf("Enter any num: ");
    scanf("%d",&num);
    if(num>=90 && num<=110 || num>=190 && num<=210)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}