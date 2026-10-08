#include<stdio.h>
int main ()
{
    float amount,discount , discountrate,finalrate;
    printf("enter purchase amount :");
    scanf("%f", & amount);
     if (amount < 5000)
        discountrate = 5;
     else if ( amount<10000)
        discountrate = 10;
     else if ( amount < 20000)
        discountrate = 15;
     else discountrate =20;
     discount = amount*discountrate/100;
     finalrate= amount - discount;
     printf(" discount =%.2f", discount );
     printf(" \nfinalrate = %.2f", finalrate);
      return 0;
}


