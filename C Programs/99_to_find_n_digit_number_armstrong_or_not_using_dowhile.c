#include<stdio.h>
#include<math.h>
void main ()
{
    int num, backup, arm=0, n, power=0,backup_power,power_value=1;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&num);
    backup=num;
    do
    {
        num=num/10;
        power=power+1;
    }while(num>0);
    backup_power=power;
    num=backup;
    do
    {
        n=num%10;
        do
        {
            power_value=power_value*n;
            power--;
        }while(power>0);
        power=backup_power;
        printf("%d\n",power_value);
        arm = arm + power_value;
        power_value=1;
        num = num/10;
        
    }while(num>0);
    printf("arm=%d backup=%d\n",arm,backup);
    if(arm==backup)
    {
        printf("%d is a Armstrong Number",backup);
    }
    else
    {
        printf("%d is NOT Armstrong Number",backup);
    }
}
