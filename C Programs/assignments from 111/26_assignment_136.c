#include<stdio.h>
void main()
{
    int a[50],b[50],n,i,m,j;
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
        if(a[i]==5)
        {
            m=i;
        }
    }

    if(m<n-1)
    {
        for(i=m+1; i<n; i++)
        {
            b[i-m-1]=a[i];
        }

        printf("new array containing elements after 5: ");
        for(i=0; i<n-m-1; i++)
        {
            printf("%d ",b[i]);
        }
    }
}