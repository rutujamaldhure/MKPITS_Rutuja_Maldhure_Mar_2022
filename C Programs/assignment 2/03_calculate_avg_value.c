//write a program that accepts two item's weight(floating point value)and number of purchase
//(floating point value) and calculate the avg value of the items.
#include<stdio.h>
#include<conio.h>
void main()
{
    float w1, w2, p1, p2, avg;
    system("cls");
    printf("Enter weight of 1st item ");
    scanf("%f", &w1);
    printf("Enter number of purchase of 1st item ");
    scanf("%f", &p1);
    printf("Enter weight of 2nd item ");
    scanf("%f", &w2);
    printf("Enter number of purchase of 2nd item ");
    scanf("%f", &p2);
    avg=((w1*p1)+(w2*p2))/(p1+p2);
    printf("avg weight of item is %f ",avg);
}