#include<stdio.h>
#include<string.h>
void main()
{
    char str[30],str_input[20];
    system("cls");
    printf("Enter any string: ");
    scanf("%s",str_input);
    strcpy(str,str_input);
    printf("copied string: %s",str);
}