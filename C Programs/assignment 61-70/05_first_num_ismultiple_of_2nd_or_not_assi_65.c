//assignment 24
#include<stdio.h>
#include<conio.h>
void main ()
{
    int num1, num2;
    system("cls");
    printf("Enter 1st number ");
    scanf("%d", &num1);
    printf("Enter 2nd number ");
    scanf("%d", &num2);
    if(num1>num2)
    {
        if(num1%num2==0)
        {
            printf("%d is multiple of %d",num1,num2);
        }
        else
        {
            printf("%d and %d are not multiple",num1,num2);
        }
    }
    else
    {
        if(num2%num1==0)
        {
            printf("%d is factor of %d not multiple",num1,num2);
        }
        else
        {
            printf("%d and %d are not multiple of each other",num1,num2);
        }
    }
}
