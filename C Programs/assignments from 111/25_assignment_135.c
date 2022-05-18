#include<stdio.h>
void main()
{
    int a[50],b[50],n,i,m;
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
            break;
        }
    }

    if(i>0)
    {
        for(i=0; i<m; i++)
        {
            b[i]=a[i];
        }

        printf("New array containing elements before 5: ");
        for(i=0; i<m; i++)
        {
            printf("%d ",b[i]);
        }
    }
    else
    printf("5 is present at 1st position.\nTherefore no array can be formed.");

}