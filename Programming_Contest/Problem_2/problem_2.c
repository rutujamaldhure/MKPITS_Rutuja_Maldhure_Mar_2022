/*
Program to Count the occurance of digit in entered string

ALGORITHM
1. Input string from user
2. count the the length of that string
3. check to find digit from entered string
4. count how many times digit occurs
5. print result
*/

#include<stdio.h>
#include<string.h>
void main ()
{
    char input_str[10], ch;
    int num, len, output_str[10]= {0,0,0,0,0,0,0,0,0,0};
    system("cls");
    
    printf("Enter the string: ");
    gets(input_str);
    
    len=strlen(input_str);
    for(int i=0; i<len; i++)
    {
        ch=input_str[i];
        
        if(ch>=48 && ch<=57)
        {
            num=(char)ch-48;
           
            if(output_str[num])
            {
            output_str[num]=output_str[num]+1;
            }
            else
            {
            output_str[num]=1;
            }
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",output_str[i]);
    }   
 
}
