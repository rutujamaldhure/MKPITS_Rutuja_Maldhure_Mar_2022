#include<stdio.h>
void main()
{
    int a[50],n,i,c=0;
    system("cls");
    printf("Enter length of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-2; i++)
    {
        if(a[i]<=a[i+1])
        {
            c=1;
        }
        else
        {
            c=0;
            break;
        }
    }
    if(c==0)
    printf("False");
    else
    printf("True");

}