#include<stdio.h>
#include<conio.h>
void main()
{
int num1, num2, res;
printf("Enter two numbers to add\n");
printf("\n1st number: ");
scanf("%d",&num1);
printf("\n2nd number: ");
scanf("%d",&num2);
res = num1+num2;
printf("addition of two number is %d",res); 
getch();
}