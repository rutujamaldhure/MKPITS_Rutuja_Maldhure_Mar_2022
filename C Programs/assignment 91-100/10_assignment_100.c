//wap to check three given integers(small, medium and large)and return true if the difference
//between small and medium and the difference between  medium and large is same.
#include<stdio.h>
void main()
{
    int a[3],i, small, med, large,r1,r2;
    system("cls");
    for(i=0; i<3; i++)
    {
        printf("enter integer : ");
        scanf("%d",&a[i]);
    }
    
    small=a[0];
    med=a[0];
    large=a[0];

    for(i=0; i<3; i++)
    {
        if(small>a[i])
        small=a[i];
        if(large< a[i])
        large=a[i];
    }
    for(i=0; i<3; i++)
    {
        if(a[i]!=small && a[i]!=large)
        med=a[i];
    }
    //printf("small=%d, medium=%d, large=%d",small,med,large);
    r1=med-small;
    r2=large-med;
    if(r1==r2)
    printf("True");
    else
    printf("False");

}