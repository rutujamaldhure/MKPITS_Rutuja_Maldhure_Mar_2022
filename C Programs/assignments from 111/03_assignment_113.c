#include<stdio.h>
void main()
{
    int a[3], b[3], res[6],i;
    system("cls");
    printf("Enter elements of 1st array:\n");
    for(i=0; i<3; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        res[i]=a[i];
    }

    printf("Enter elements of 2nd array:\n");
    for(i=0; i<3; i++)
    {
        printf("b[%d]= ",i);
        scanf("%d",&b[i]);
        res[i+3]=b[i];
    }

    printf("New array: ");
    for(i=0; i<6; i++)
    {
        printf("res[%d]=%d  ",i, res[i]);
    }
}