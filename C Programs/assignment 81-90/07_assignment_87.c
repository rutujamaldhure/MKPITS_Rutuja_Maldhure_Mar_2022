#include<stdio.h>
void main()
{
    int num1, num2,l1,l2;
    system("cls");
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    if(num1>0 && num2>0)
    {
        l1=num1%10;
        l2=num2%10;
        if(l1==l2)
        printf("last digits of entered numbers are same");
        else
        printf("last digits of entered numbers are different");
    }
    else
    {
        printf("invalid input");
    }
}