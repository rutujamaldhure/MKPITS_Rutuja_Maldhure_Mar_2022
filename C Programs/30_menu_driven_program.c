#include<stdio.h>
#include<conio.h>
void main ()
{
    int choice, num1, num2, res;
    float num3, num4 , div;
    printf("press 1 for addition");
    printf("\nnpress 2 for substraction");
    printf("\npress 3 for multiplication");
    printf("\npress 4 for division");
    printf("\nEnter your choice- ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("Enter two numbers to add\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1+num2;
        printf("addition of two number is %d",res); 
    }
    else
    if(choice==2)
    {
        
        printf("Enter two numbers to subtract\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1-num2;
        printf("substraction of two number is %d",res);
    }
    else
    if(choice==3)
    {
        
        printf("Enter two numbers to multiplication\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1*num2;
        printf("multiplication of two number is %d",res);
    }
    else
    if(choice==4)
    {
        
        printf("Enter two numbers to divide\n");
        printf("\n1st number: ");
        scanf("%f",&num3);
        printf("\n2nd number: ");
        scanf("%f",&num4);
        div = num3/num4;
        printf("addition of two number is %f",div);
    }
    else
    {
        printf("invalid choice");
    }

}