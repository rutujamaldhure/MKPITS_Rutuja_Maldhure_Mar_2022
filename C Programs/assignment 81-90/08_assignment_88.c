#include<stdio.h>
void main()
{
    int a[50],t=0,n,i;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    printf("Enter elements of an array\n");
    for(i=0; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=n; i++)
    {
        if(a[i]==1)
        {
            if(a[i+1]==2)
            {
                if(a[i+2]==3)
                {
                    t=t+1;
                }
                
            }
        }
    }
    if(t==0)
    printf("sequence of 1,2,3 is not found");
    else
    printf("%d times sequence of 1,2,3 is found ",t);
}