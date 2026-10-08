
#include <stdio.h>

int main()

{
    float a;
    float pi;
    float area;
    float perimeter;
    printf("enter the radius :");
    scanf("%f", & a);
    pi = 3.14;
    perimeter = 2*pi*a;
    area = pi*(a*a);
    printf("the area is : %.2f", area );
    printf("\t the perimeter is : %.2f", perimeter );
    return 0;
}
