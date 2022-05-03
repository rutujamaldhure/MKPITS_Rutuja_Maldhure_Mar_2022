#include<stdio.h>
int armstrong(int num)
{
    int backup, arm=0, n, power=0,backup_power,power_value=1;
    backup=num;
    while(num>0)
    {
        num=num/10;
        power=power+1;
    }
    backup_power=power;
    num=backup;
    for(;num>0;)
    {
        n=num%10;
        for(;power>0;power--)
        {
            power_value=power_value*n;
        }
        power=backup_power;
        arm = arm + power_value;
        power_value=1;
        num = num/10;
        
    }
    if(arm==backup)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int value,r;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&value);
    r=armstrong(value);
    if(r==1)
    printf("%d is armstrong number",value);
    else
    printf("%d is not armstrong number",value);
}
