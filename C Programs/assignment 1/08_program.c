//write a program that accept two interger from user and calculate the sum of two interger.
#include<stdio.h>
void main ()
{
    int num1, num2, res;
    printf("Enter 1st number ");
    scanf("%d",&num1);
    printf("\nEnter 2nd number ");
    scanf("%d",&num2);
    res= num1 + num2;
    printf("Addition of %d and %d is %d", num1,num2,res);
}