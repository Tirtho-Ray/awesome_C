// // #include <stdio.h>
// // int main () {
// //     int age  = 10;
// //     float marks  = 75.5
// //     char grade  = 'A';
// //     char name  ;

// //     printf("age is : %d",age );
// //     printf("mark is : %f",marks );
// //     printf("grade is : %c",grade ); 
// //     printf("Enter your name : ");
// //     scanf("%c",&name ); // its input from user and store in variable name


// //     printf("size of int is : %zu",sizeof(age) ); // how to find the size of variable in c programming language
// // }

// // #include <stdio.h>
// // int main() {
// //     int a = 20;
// //     int b = 10;
// //     int result  = a < b;
// //     int result1  = a > b;
// //     int result2  = a == b;
// //     int result3  = a != b;
// //     int result4  = a <= b;
// //     int result5  = a >= b;

// //     printf("result is : %d\n",result );
// //     printf("result1 is : %d\n",result1 );
// //     printf("result2 is : %d\n",result2 );
// //     printf("result3 is : %d\n",result3 );   
// //     printf("result4 is : %d\n",result4 );
// //     printf("result5 is : %d\n",result5 );

// // }

// #include <stdio.h>
// int main() {
//     int a = 18;
//     int b = 20

//     if (a >b && a <30) {
//         printf("a is greater than b and less than 30");
//     } else {
//         printf("Condition not met");
//     }

//     if (a <b || a >30) {
//         printf("a is less than b or greater than 30");
//     } else {
//         printf("Condition not met");
//     }

//     if (!(a >b)) {
//         printf("a is not greater than b");
//     } else {
//         printf("Condition not met");
//     }

// }




//  problem solving in c programming language loops 

// 1: find the Factorial 
//  #include <stdio.h>
// int main() {
//     int n;
//     int factional = 1;

//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for (int i = 1; i<=n; i++){
//         factional = factional * i;
//     }
//     printf("Factorial of %d is: %d\n", n, factional);

// }
// //



// Nested Loops & Pattern Mastery

// Outer loop → Row
//     Inner loop → Column

#include <stdio.h>
int main() {

     for ( int row = 1; row <= 5; row++) {
        printf("\n *");
    }
}