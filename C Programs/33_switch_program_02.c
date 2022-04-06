#include<stdio.h>
#include<conio.h>
void main ()
{
    int num1, num2, res;
    float num3, num4 , div;
    char choice;
    printf("\nEnter your choice- \n+ for addition\n- for substraction \n* for multiplication \n/ for division \n");
    scanf("%c", &choice);
    switch (choice)
    {
        case '+':
        printf("Enter two numbers to add\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1+num2;
        printf("addition of two number is %d",res); 
        break;
        
        case '-':
        printf("Enter two numbers to subtract\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1-num2;
        printf("substraction of two number is %d",res);
        break;

        case '*':        
        printf("Enter two numbers to multiplication\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1*num2;
        printf("multiplication of two number is %d",res);
        break;

        case '/':
        printf("Enter two numbers to divide\n");
        printf("\n1st number: ");
        scanf("%f",&num3);
        printf("\n2nd number: ");
        scanf("%f",&num4);
        div = num3/num4;
        printf("addition of two number is %f",div);
        break;

        default:
        printf("invalid choice");
    }

}