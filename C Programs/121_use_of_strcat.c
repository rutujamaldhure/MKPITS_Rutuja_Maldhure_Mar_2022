#include<stdio.h>
#include<string.h>
void main()
{
    char str[30]="Rutuja ",str_input[20];
    system("cls");
    printf("Enter any string: ");
    scanf("%s",str_input);
    strcat(str,str_input);
    printf("concatinated string: %s",str);
}