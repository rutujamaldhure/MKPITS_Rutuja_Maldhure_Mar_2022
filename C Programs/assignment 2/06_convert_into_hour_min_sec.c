#include<stdio.h>
#include<conio.h>
void main ()
{
    int time, hr, min, sec,backup;
    system("cls");
    time=backup;
    printf("Enter time in seconds ");
    scanf("%d",&time);
    hr= time/(60*60);
    time= time%3600;
    min= time/60;
    time=time%60;
    sec=time;
    printf("%d seconds means %d hr %d minute %d sec",backup,hr,min,sec);

}