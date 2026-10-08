#include <stdio.h>
int main()

{
    const int username = 7337409532 ;
    const int password = 7337 ;
    int username_ip,password_ip;
    printf("enter usernme & password\n ");
    scanf("%d%d",& username_ip,&password_ip);
    if(username == username_ip && password == password_ip)
    {
        printf("user is authorized");

    }
    else
    {
        printf("user is  unauthorized");
    }
    return 0;
}
