// Condition in C programming language: ----->
// 1: if statement
// 2: if else statement
// 3: else  statement
// 4: else if statement  
// 5: nested if statement

// condition in c is  -> condition means to this is  to that is . true / false 
// here if statement is used to check the condition and execute the code block if the condition is true. if else statement is used to check the condition and execute the code block if the condition is true, otherwise execute the else block. 

==>
// example :
#include <stdio.h>
int main (){
    int age  = 20 ;

    if (age >= 18) {
        printf("You can give vote");
    }else{
        printf("you are not 18+");
    }
}


// example: else if 
#include  <stdio.h>
int main () {
    int mark  = 75;
    if ( mark >= 80) {
        printf("you got A +");
    }else if(mark <= 33){
        printf(" you are fail");
    }else{
        printf(" pass ")
    }
    
}


// example nested if else , else if 
#include <stdio.h>
int main(){
    int age  = 18;
    int isCitizen = 1; // 1 means true and if it 0 0 then its count false 

    if (age >= 18){
        printf("you can give normal vote ");
        
        if(isCitizen == 1){
            printf("you can give all vot now ");
        }
    }else{
        printf("You can not give vote now");
    }
}


#include <stdio.h>
int main(){
    int age  = 18;
    int isCitizen = 1; // 1 means true and if it 0 0 then its count false 

    if (age >= 18 && isCitizen == 1){
        printf("you can give all vot now ");
    }else if(age>=18){
        printf("You can give normal vote");
    }else{
        printf("you are not ealizable");
    }
}


#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 80) {
        printf("Grade: A+\n");
    } else if (marks >= 70) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");
    } else if (marks >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}


// Switch case  in c programming -------->
// syntax

switch (expression)
{
case constant expression:
    /* code */
    break;

default:
    break;
}

// here switch is keyword  and here you can work condition type . in case block you can write condition and you can write multiple case , then break is if condition come true then program execute . here dfault means if condition not match then its print as like else block 

// example :

#include <stdio.h>

int main() {
    int result = 80;

    switch (result) {

        case 80:
            printf("A+");
            break;

        case 70:
            printf("A-");
            break;

        default:
            printf("Fail");
            break;
    }

    return 0;
}

              value
                ↓
      ┌─────────┼─────────┐
      ↓         ↓         ↓
    case 1    case 2    case 3
      ↓         ↓         ↓
    code      code      code