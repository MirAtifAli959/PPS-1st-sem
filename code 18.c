#include<stdio.h>
int main()

{
    int n;
    printf("enter the number");
    scanf("%d",& n);
    int i=1;
    int sum ;
    while(i<= n)
    {
        sum=sum+i;
        i++;
    }
    printf("the sum is:%d", sum );
    return 0;
}

