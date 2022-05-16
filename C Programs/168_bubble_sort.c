#include<stdio.h>
void main()
{
    int a[50],i,n,j,temp;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i );
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]> a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Element after sorting- ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}