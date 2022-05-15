#include<stdio.h>
void main()
{
    int a[50], n, i,c=0, b=0;
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
        if(a[i]==3)
        b=b+1;
    }

    if(c==0 && b>0)
    printf("Array contains 3's");
    if(b==0 && c>0)
    printf("Array contains 5's");
    if(c==0 && b==0)
    printf("Array doesn't contain both 3's or 5's");
    if(c>0 && b>0)
    printf("Array contain both 3's or 5's");
}