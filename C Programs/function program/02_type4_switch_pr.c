#include<stdio.h>
int menudriven ()
{
    int choice,num1, num2, res;
    printf("\nEnter your choice- \n1 for addition\n2 for substraction \n3 for multiplication \n4 for division \n");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        printf("Enter two numbers to add\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1+num2;
        return res;
        break;
        
        case 2:
        printf("Enter two numbers to subtract\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1-num2;
        return res;
        break;

        case 3:        
        printf("Enter two numbers to multiplication\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1*num2;
        return res;
        break;

        case 4:
        printf("Enter two numbers to divide\n");
        printf("\n1st number: ");
        scanf("%d",&num1);
        printf("\n2nd number: ");
        scanf("%d",&num2);
        res = num1/num2;
        return res;
        break;

        default:
        return 0;
    }

}
void main()
{
    int r;
    system("cls");
    r=menudriven();
    if(r==0)
    printf("INVALID INPUT");
    else
    printf("result = %d",r);  
}