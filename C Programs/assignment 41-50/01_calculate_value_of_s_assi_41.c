#include<stdio.h>
void main ()
{
    double sum =1 ,i;
    system("cls");
    for(i=2 ; i<=50; i++)
    {
        sum = sum +1/i;
    }
    printf("sum of all elements=%lf",sum);
}