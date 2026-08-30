// ------------------------> 01 Operator in c programming language <------------------------
// Operators are special symbols that perform operations on variables and values.
c have some types of operators: ----->

1: Arithmetic Operators  →  // Arithmetic operators are used to perform mathematical operations such as addition, subtraction, multiplication, division, and modulus on numeric values.

2: Assignment Operators  →  // Assignment operators are used to assign values to variables. The most common assignment operator is the equal sign (=), which assigns the value on the right to the variable on the left.

3: Comparison Operators  →  // Comparison operators are used to compare two values and return a boolean result (true or false). These operators include equal to (==), not equal to (!=), greater than (>), less than (<), greater than or equal to (>=), and less than or equal to (<=).

4: Logical Operators  →  // Logical operators are used to combine multiple boolean expressions and return a boolean result. The most common logical operators are AND (&&), OR (||), and NOT (!).

5: Bitwise Operators  →  // Bitwise operators are used to perform operations on individual bits of integer values. These operators include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).

6: Increment and Decrement Operators  →  // Increment and decrement operators are used to increase or decrease the value of a variable by 1. The increment operator (++) adds 1 to the variable, while the decrement operator (--) subtracts 1 from the variable.

7: Conditional (Ternary) Operator  →  // The conditional operator (?:) is a shorthand way of writing an if-else statement. It takes three operands: a condition, a value to return if the condition

==>
A : Arithmetic operators in c programming language: ----->
1: +  -> addition
2: -  -> subtraction
3: *  -> multiplication
4: /  -> division
5: %  -> modulus

==>
example : 
#include <stdio.h>
int main  () {
    int a = 10 ;
    int b= 10 ;

    int sum  = a+b
    int sum  = a-b
    int sum  = a*b
    int sum  = a/b
    int sum  = a%b
    printf("sum is : %d",sum );
}

==>
B: Assignment operators in c programming language: ----->
1: =  -> assignment operator
2: +=  -> add and assign
3: -=  -> subtract and assign
4: *=  -> multiply and assign
5: /=  -> divide and assign
6: %=  -> modulus and assign


==>
C: Comparison operators in c programming language: ----->
1: ==  -> equal to
2: !=  -> not equal to
3: >  -> greater than
4: <  -> less than
5: >=  -> greater than or equal to
6: <=  -> less than or equal to

//note : here 1 is true and 0 is false

// example :
#include <stdio.h>
int main() {
    int a = 20;
    int b = 10;
    int result  = a < b;
    int result1  = a > b;
    int result2  = a == b;
    int result3  = a != b;
    int result4  = a <= b;
    int result5  = a >= b;

    printf("result is : %d\n",result );
    printf("result1 is : %d\n",result1 );
    printf("result2 is : %d\n",result2 );
    printf("result3 is : %d\n",result3 );   
    printf("result4 is : %d\n",result4 );
    printf("result5 is : %d\n",result5 );

}

D: Logical operators in c programming language: ----->
1: &&  -> logical AND // this operator returns true if both operands are true, and false otherwise. It is often used in conditional statements to combine multiple conditions.
2: ||  -> logical OR // this operator returns true if at least one of the operands is true, and false if both operands are false. It is commonly used in conditional statements to check for multiple conditions.
3: !  -> logical NOT // this operator is used to negate a boolean value. It returns true if the operand is false, and false if the operand is true. It is often used to reverse the logic of a condition in conditional statements.

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

e: Bitwise operators in c programming language: ----->
1: &  -> bitwise AND // this operator performs a bitwise AND operation between two integer values. It compares each corresponding bit of the two values and returns a new value where each bit is set to 1 only if both bits are 1, otherwise it is set to 0.
2: |  -> bitwise OR
3: ^  -> bitwise XOR
4: ~  -> bitwise NOT
5: <<  -> left shift
6: >>  -> right shift 

\