#include<stdio.h>
void main()
{
    int num1, num2, i, add=0;
    system("cls");
    printf("Enter 1st number\n");
    scanf("%d", &num1);
    printf("Enter 2nd number\n");
    scanf("%d", &num2);
    i=num1;
    while(i<=num2)
    {
        if(i%17!=0)
        {
            printf("%d\n", i);
            add=add+i;
        }
        i++;
    }

    printf("Addition of all Numbers not divisible by 17 between %d and %d = %d ", num1, num2 ,add);
}