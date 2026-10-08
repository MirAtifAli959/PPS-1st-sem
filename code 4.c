
#include <stdio.h>

int main()

{
    float a;
    float b;
    float c;
    float simple_interest;
    printf("enter the principle :");
    scanf("%f", & a);
    printf("enter the time :");
    scanf("%f", & b );
    printf("enter the ROI :");
    scanf("%f", & c);
    simple_interest = (a+b+c)/100;
    printf("the simple interest is : %f", simple_interest );
    return 0;
}
