#include<stdio.h>
void menudriven (int x)
{
    int num1, num2, res;
    float num3, num4 , div;
    switch (x)
    {
        case 1:
        printf("Enter two numbers to add\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1+num2;
        printf("addition of two number is %d",res); 
        break;
        
        case 2:
        printf("Enter two numbers to subtract\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1-num2;
        printf("substraction of two number is %d",res);
        break;

        case 3:        
        printf("Enter two numbers to multiplication\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1*num2;
        printf("multiplication of two number is %d",res);
        break;

        case 4:
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
void fun()
{
    int choice;
    printf("\nEnter your choice- \n1 for addition\n2 for substraction \n3 for multiplication \n4 for division \n");
    scanf("%d", &choice);
    menudriven(choice);
}
void main()
{
    system("cls");
    fun();
}