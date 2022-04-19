#include<stdio.h>
void main()
{
    int num1, num2, i, add=0;
    system("cls");
    printf("Enter 1st number\n");
    scanf("%d", &num1);
    printf("Enter 2nd number\n");
    scanf("%d", &num2);
    printf("The numbers which gives remainder as 2 or 3 when divide it by 7 are \n");
    i=num1;
    do
    {
        if(i%7==2 || i%7==3)
        {
            printf("%d\n", i);
        }
        i++;
    }while(i<=num2);

}