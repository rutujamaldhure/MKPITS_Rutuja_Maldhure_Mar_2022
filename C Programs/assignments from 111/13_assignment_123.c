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
        if(a[i]==5)
        c=c+1;
    }
    if(c==3)
    printf("sum of all 5's in array is 15");
    else
    printf("False");
}