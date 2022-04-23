#include<stdio.h>

void main()
{
    int num1,num2;
    system("cls");
    printf("Enter two numbers to swap\n");
    printf("Enter 1st number= ");
    scanf("%d",&num1);
    printf("Enter 2nd number= ");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("After swapping\n1st number= %d\n2nd number= %d",num1,num2);
}