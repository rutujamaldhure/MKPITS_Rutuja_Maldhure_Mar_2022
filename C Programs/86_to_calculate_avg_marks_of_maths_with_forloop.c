#include<stdio.h>
void main()
{
    int t=0,n=0,marks;
    float avg;
    system("cls");
    printf("Enter marks of Roll No 1 ");
    scanf("%d", &marks);
    for(n=1;marks>0;n++)
    {
        t=t+marks;
        printf("Enter marks of roll no %d ",n+1);
        scanf("%d",&marks);
    }
    avg=(float)t/(float)(n-1);
    printf("Average marks=%f",avg);
}