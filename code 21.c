#include<stdio.h>
int main ()
{
    float marks;
    printf("enter marks (0-100) :");
    scanf("%f", & marks);
    if ( marks <0 || marks > 100){
        printf ("invaild marks .\n");
    }
    else if ( marks < 40 ){
        printf( " results : fail\n");
        printf(" grade : F\n");
    }
        else if ( marks >=90){
            printf ( " results : pass with distinct\n");
            printf (" grade : A+\n" );
        }
        else if ( marks >=80){
                printf("results : pass\n");
                printf(" grade : A\n");
        }
        else if (marks >= 70){
                printf("results : pass\n");
        printf("grade : B+");
        }
        else if ( marks >= 60 ){
                printf (" results : pass\n");
                printf(" grade :B\n ");
        }
        else if (marks >= 50){
                printf(" results : pass\n");
                printf(" grade : C\n");
        }
        else {
        printf(" results : pass\n");
        printf("grade : C\n");
        }
               return 0;
}
