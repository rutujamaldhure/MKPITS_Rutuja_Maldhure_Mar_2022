#include<stdio.h>
void main()
{
    int x,y,z,eq1,eq2;
    system("cls");
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    printf("Enter value of z: ");
    scanf("%d",&z);
    eq1=(x+y)*z;
    eq2=(x*y)+(y*z);
    printf("\n(x+y)*z    = %d",eq1);
    printf("\n(x*y)+(y*z)= %d",eq2);
}