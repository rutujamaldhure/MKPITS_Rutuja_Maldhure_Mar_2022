#include<stdio.h>
#include<conio.h>
void main()
{
int num1, num2, sw;
printf("Enter 1st number ");
scanf("%d", &num1);
printf("\nEnter 2nd number ");
scanf("%d", &num2);
sw=num1;
num1=num2;
num2=sw;
printf("after swaping");
printf("\n1st number = %d and 2nd number = %d",num1,num2);
getch();
}