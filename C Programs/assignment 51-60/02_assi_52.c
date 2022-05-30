#include<stdio.h>
void main()
{
    int a,b;
    system("cls");
    printf("Enter value: ");
    scanf("%d",&a);
    b=a<<=2;
    printf("value after shifting data by 2 bit to the left= %d",b);
}