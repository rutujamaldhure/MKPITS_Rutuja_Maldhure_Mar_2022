#include<stdio.h>
void main()
{
    int a[5],b[5],res[5],i;
    system("cls");
    printf("Enter elements of 1st array\n");
    for(i=0; i<5;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter elements of 2nd array:\n");
    for(i=0; i<5;i++)
    {
        printf("b[%d]= ",i);
        scanf("%d",&b[i]);
    }
    
    printf("array containing middle elements of given array\n");
    res[0]=a[5/2];
    res[1]=b[5/2];
    for(i=0; i<2; i++)
    {
        printf("res[%d]= %d\n",i,res[i]);
    }
}