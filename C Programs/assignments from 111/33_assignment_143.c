#include<stdio.h>
void main()
{
    int a,b,c,d;
    float avg;
    system("cls");
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);
    printf("Enter 3rd num: ");
    scanf("%d",&c);
    printf("Enter 4th num: ");
    scanf("%d",&d);
    avg=(float)(a+b+c+d)/4;
    printf("Average= %.2f",avg);
}