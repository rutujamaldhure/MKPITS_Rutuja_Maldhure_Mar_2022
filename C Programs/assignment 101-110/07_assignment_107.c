#include<stdio.h>
void main()
{
    int a[2],i,c=0;
    system("cls");
    printf("Enter elements of array:\n");
    for(i=0; i<2;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<2; i++)
    {
        if (a[i]==20 || a[i]==15)
        {
            c=c+1;
        }
    }
    if(c==0)
    printf("15 or 20 are not present ");
    else
    printf("15 or 20 are present");
}