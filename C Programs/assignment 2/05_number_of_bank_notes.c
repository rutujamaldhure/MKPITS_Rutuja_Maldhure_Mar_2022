// write a program to read  an amount(integer value) and break the amount into 
//smallest posiible number of bank notes.
# include<stdio.h>
void main ()
{
    int amount, n1 , n2 , n3, n4, n5, n6,n7,t;
    // n1=2000, n2=500, n3=200, n4=100, n5=50, n6=20, n7=10, 
    printf("Enter amount ends with zero ");
    scanf("%d", &amount);
    if(amount>=2000)
    {
        n1=amount/2000;
        t=amount%2000;
        n2=t/500;
        t=t%500;
        n3=t/200;
        t=t%200;
        n4=t/100;
        t=t%100;
        n5=t/50;
        t=t%50;
        n6=t/20;
        t=t%20;
        n7=t/10;
        printf("2000 Rs notes= %d, \n 500 Rs notes= %d,\n 200 Rs notes= %d, \n 100 Rs notes= %d,\n  50 Rs notes= %d, \n  20 Rs notes= %d, \n  10 Rs notes= %d",n1, n2, n3,n4, n5, n6, n7);
    }
    else
    if (amount<2000 && amount>=500)
    {
        n2=amount/500;
        t=amount%500;
        n3=t/200;
        t=t%200;
        n4=t/100;
        t=t%100;
        n5=t/50;
        t=t%50;
        n6=t/20;
        t=t%20;
        n7=t/10;
        printf("500 Rs notes= %d,\n200 Rs notes= %d, \n100 Rs notes= %d,\n 50 Rs notes= %d, \n 20 Rs notes= %d, \n 10 Rs notes= %d", n2, n3,n4, n5, n6, n7);
    }
    else
    if(amount<500 && amount>=200)
    {
        n3=amount/200;
        t=amount%200;
        n4=t/100;
        t=t%100;
        n5=t/50;
        t=t%50;
        n6=t/20;
        t=t%20;
        n7=t/10;
        printf("200 Rs notes= %d, \n100 Rs notes= %d,\n 50 Rs notes= %d, \n 20 Rs notes= %d, \n 10 Rs notes= %d",n3,n4, n5, n6, n7);
    }
    else
    if (amount<200 && amount>=100)
    {
        n4=amount/100;
        t=amount%100;
        n5=t/50;
        t=t%50;
        n6=t/20;
        t=t%20;
        n7=t/10;
        printf("100 Rs notes= %d,\n 50 Rs notes= %d, \n 20 Rs notes= %d, \n 10 Rs notes= %d",n4, n5, n6, n7);
    }
    else
    if (amount<100 && amount>=50)
    {
        n5=amount/50;
        t=amount%50;
        n6=t/20;
        t=t%20;
        n7=t/10;
        printf("50 Rs notes= %d, \n20 Rs notes= %d, \n10 Rs notes= %d",n5, n6, n7);
    }
    else
    if(amount<50 && amount>=20)
    {
        n6=amount/20;
        t=amount%20;
        n7=t/10;
        printf("20 Rs notes= %d, \n10 Rs notes= %d",n6, n7);
    }
    else
    if (amount <20 && amount >=10)
    {
        n7=amount/10;
        printf("10 Rs notes= %d", n7);
    }
    else
    {
        printf("Invalid Input \nAmount should be multipule of 10 ");
    }
    

}