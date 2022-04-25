#include<stdio.h>
void main()
{
    int num, min, max,sum=0, count_num=0;
    float avg;
    system("cls");
    printf("Enter number ");
    scanf("%d",&num);
    if(num>0)
    {
        min=num;
        max=num;
        for(;num>0;)
        {
            count_num=count_num+1;
            if(min>num)
            min=num;
            if(max<num)
            max=num;
            sum=sum+num;
            printf("Enter number ");
            scanf("%d",&num);
        }
        avg=(float)sum/(float)count_num;
        printf("You entered\nNumber of values= %d\nMinimum value= %d\nMaximun value= %d\nAverage of all values= %f",count_num,min,max,avg);
    }
    else
    {
        printf("invalid input");
    }    
}
