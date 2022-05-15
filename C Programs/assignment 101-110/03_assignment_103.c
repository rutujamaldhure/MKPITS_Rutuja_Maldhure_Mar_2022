#include<stdio.h>
void main()
{
    int a[4],b[4],i;
    system("cls");
    printf("Enter elements of an array\n");
    for(i=0; i<4; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\nArray after rotation towards left \n");
    for(i=0; i<4; i++)
    {
        if(i==3)
        {
            b[0]=a[i];
        }
        else
        {
            b[i+1]=a[i];	
        }
    }
    for(i=0; i<4; i++)
    {
        printf("b[%d]= %d\n",i,b[i]);
    }
}