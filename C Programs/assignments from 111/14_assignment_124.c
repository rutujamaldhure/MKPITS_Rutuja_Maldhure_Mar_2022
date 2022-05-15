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
    if(b>c)
    printf("True- because no of 3's is greater than no of 5's");
    else
    printf("False");

}