#include<stdio.h>
void main()
{
    int a[50],b[50], n, i;
    system("cls");
    printf("Enter length of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(i!=n-1)
        {
           b[i]=a[i+1];
        }
        else
        {
           b[i]=a[0];
        }
    }
    printf("New array after shifting- ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }

}