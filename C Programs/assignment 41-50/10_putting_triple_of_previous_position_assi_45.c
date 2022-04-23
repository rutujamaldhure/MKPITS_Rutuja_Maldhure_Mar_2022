#include<stdio.h>
void main ()
{
    int a[7],i;
    system("cls");
    printf("Enter any 7 numbers\n");
    for(i=0; i<7; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=6; i>0; i--)
    {
        a[i]=a[i-1]*3;
    }
    printf("After putting triple of previous position-");
    for(i=0; i<7; i++)
    {
        printf("%d ",a[i]);
    }
}