#include<stdio.h>
void main()
{
    int a[50], n, i,c,flag=0;
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
        if(a[i]%2==0 && a[i+1]%2==0 && a[i+2]%2!=0 && a[i+3]%2!=0)
        {
            flag=1;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}