#include<stdio.h>
void main()
{
    int a[50], n, i,c=0;
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
        if(a[i]<a[i+1])
        {
            if(a[i+1]<a[i+2])
            c=c+1;
        }
    }

    if(c>0)
    printf("True");
    else
    printf("False");
}