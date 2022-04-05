//write a proram to print division of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    float num1, num2, res;
    printf("Enter 1st number: ");
    scanf("%f", &num1);
    printf("\nEnter 2nd number: ");
    scanf("%f",&num2);
    res= num1/num2;
    printf("Division of %f and %f is %f", num1,num2,res);
    getch();
    
}