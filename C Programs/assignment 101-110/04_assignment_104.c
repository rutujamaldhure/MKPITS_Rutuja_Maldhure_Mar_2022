#include<stdio.h>
void main()
{
    int a[5],i,temp;
    system("cls");
    printf("Enter elements of an array\n");
    for(i=0; i<5; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\nReverse of array\n");
    for(i=0; i<5/2; i++)
    {
        temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }
    for(i=0; i<5; i++)
    {
        printf("a[%d]= %d\n",i,a[i]);
    }
}