//wap to check if y is greater than x, and z is greater than y from three given integers x,y,z.
#include<stdio.h>
void main()
{
    int x,y,z;
    system("cls");
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    printf("Enter value of z: ");
    scanf("%d",&z);
    if(y>x && z>y)
    printf("True");
    else
    printf("False");
}