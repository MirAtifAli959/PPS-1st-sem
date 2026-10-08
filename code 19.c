#include<stdio.h>
int main ()
{
    float units,bill;
    printf("enter units consumed :");
    scanf("%f", & units);
     if (units <= 100)
        bill = units *1.50;
     else if( units <=200)
        bill = units *2.50;
     else if ( units <= 300)
        bill = units *4.00;
     else
        bill = units *6.00;
     printf(" electricity bill = Rs : %.2f\t", bill);

      return 0;

}
