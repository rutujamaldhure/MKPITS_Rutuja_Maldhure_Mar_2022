#include<stdio.h>
void main()
{
    int year;
    system("cls");
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%4==0)
    printf("%d is leap year.",year);
    else
    printf("%d is not leap year.",year);
}