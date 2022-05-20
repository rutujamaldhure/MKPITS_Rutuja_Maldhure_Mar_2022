#include<stdio.h>
void main()
{
    int a[50],n,i,c=0;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    if(n>=2)
    {
        printf("Enter array element\n");
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(a[i]==15 && a[i+1]==15)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        printf("True");
        else
        printf("False");
    }
    else
    {
        printf("Invalid Input");
    }
}