#include<stdio.h>
void main()
{
    int a[50],b[50],n,i,j,count=0;
    system("cls");
    printf("Enter length of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    j=0;
    for(i=0; i<n; i++)
    {
        if( a[i]%2==0 )
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            b[j]=a[i];
            j++;
        }
    }

    printf("new array: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
}
