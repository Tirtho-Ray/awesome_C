#include <stdio.h>
int main () {
    int age  = 10;
    float marks  = 75.5
    char grade  = 'A';
    char name  ;

    printf("age is : %d",age );
    printf("mark is : %f",marks );
    printf("grade is : %c",grade ); 
    printf("Enter your name : ");
    scanf("%c",&name ); // its input from user and store in variable name


    printf("size of int is : %zu",sizeof(age) ); // how to find the size of variable in c programming language
}