#include<stdio.h>
int sum1(int n);

void main() 
{
    int n, sum;
    system("cls");

    printf("Enter a Number upto which you want to add : ");
    scanf("%d", &n);

    sum = sum1(n);

    printf("Sum Of Natural Number is = %d", sum);
}

int sum1(int num) 
{
    if (num != 0)
    {
        return num + sum1(num-1); 
	}
    else
    {
        return num;
	}
}