#include<stdio.h>
void fun (int *x, int *y)
{
    *x=12;
    *y=13;
}

void main()
{
    int a=2,b=3;
    system("cls");
    printf("a= %d b= %d\n",a,b);
    fun(&a, &b);
    printf("a= %d b= %d",a,b);
}