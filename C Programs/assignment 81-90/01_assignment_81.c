#include<stdio.h>
void main()
{
    int num1,num2;
    system("cls");
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    if(num1>=100 && num1<=200 || num2>=100 && num2<=200)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}