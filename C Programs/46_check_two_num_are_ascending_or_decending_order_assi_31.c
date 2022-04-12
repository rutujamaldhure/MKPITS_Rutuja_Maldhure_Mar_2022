#include<stdio.h>
void main ()
{
    int num1,num2;
    system("cls");
    printf("Enter 1st number\n");
    scanf("%d",&num1);
    printf("Enter 2nd number\n");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("numbers are in Descending Order" );
    }
    else
    {
        printf("Numbers Are In Ascending Order");
    }
}