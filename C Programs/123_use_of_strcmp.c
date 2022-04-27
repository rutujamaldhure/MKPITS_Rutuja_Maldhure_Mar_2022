#include<stdio.h>
#include<string.h>
void main()
{
    char str_input1[20],str_input2[20];
    int dif;
    system("cls");
    printf("Enter 1st string: ");
    scanf("%s",str_input1);
    printf("Enter 2nd string: ");
    scanf("%s",str_input2);
    dif=strcmp(str_input1,str_input2);
    printf("after compairing: %d",dif);
}