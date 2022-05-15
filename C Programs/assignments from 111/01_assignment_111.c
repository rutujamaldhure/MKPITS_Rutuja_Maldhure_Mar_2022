#include<stdio.h>
void main()
{
    int a[3], b[3], i,sum_a=0, sum_b=0;
    system("cls");
    printf("Enter element of A array:\n");
    for(i=0; i<3; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        sum_a=sum_a+a[i];
    }

    printf("Enter element of B array:\n");
    for(i=0; i<3; i++)
    {
        printf("b[%d]= ",i);
        scanf("%d",&b[i]);
        sum_b=sum_b+b[i];
    }

    if(sum_a>sum_b)
    printf("Array A has largest sum");
    else
    printf("Array B has largest sum");

    
}