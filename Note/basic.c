// this is the note of c programming and here all practices task  and theroury note here: ==> 


//  --------------->     Intro into c   <---------------------

// 1: C is created by Dennis Ritchie in 1972 at Bell Labs.
// 2: C is low level programming language.
// 3: C is a structured programming language.
// 4: C is a general purpose programming language.


// --------------->     C language structure    <---------------------

#include <stdio.h> // include is preprocessor directive.  here stdio.h is a header file which is used to perform input and output operations in c programming language. / this is a preprocessor directive which is used to include the standard input-output library in the program. / its a library .
// std = Standard
// io = Input / Output

int main() { 
    // main is a function which is the entry point of the program. / int is a return type of the function which means the function will return an integer value. / () is a parameter list which is empty in this case. / {} is a block of code which contains the statements of the function.
}

int main() { 
    return 0; // return statement which returns an integer value 0 to the operating system. / 0 means successful execution of the program.
}

// final syntax of c program is:
#include <stdio.h>
int main() { 
    // statements
    return 0; 
}

// -------------------------------------------> 01 <-----------------------------------

printf()   → //Prints text to the terminal.
//  \n  -> New line character. It moves the cursor to the next line.


// -------------------------------------------> 02 [ variables and data type]  <----------------------------------- 
==>
// variable is  store value in memory location. 
// Variables are containers for storing data values, like numbers and characters.

==>
// There are some kind of variables in c programming language: ----->
1: int  →  // int is a data type which is used to store integer values
2: float  →  // float is a data type which is used to store decimal values
3: char  →  // char is a data type which is used to store single character
4: double  →  // double is a data type which is used to store double precision floating point values  : here double is used to store large decimal values.


==>
// Example of variables in c programming language: ----->
// int  ->
int age  = 20  // here int is a a datatype , which is used to store integer values. 

// float  ->
float marks = 75.5;  // here float is a datatype which is used to store decimal values.

// char  ->
char grade = 'A';  // here char is a datatype which is used to store single character values. / here grade is a variable which is used to store single character value 'A' / "hello world".


// double  ->
double pi = 3.14159;  // here double is a datatype which is used to store large decimal values. / here pi is a variable which is used to store large decimal value 3.14159.

==>
// Different data types use different format specifiers: -----> 
int age   = 20 // %d is used to print integer values
printf("Age: %d\n", age); // Output: Age: 20

float marks = 75.5; // %f is used to print float values
printf("marks : %f\n", marks); // Output: marks : 75.500000

char grade = 'A'; // %c is used to print char values
printf("Grade: %c\n", grade); // Output: Grade: A

double pi = 3.14159; // %lf is used to print double values
printf("pi: %lf\n", pi); // Output: pi: 3.141590


//Example of variables in c programming language: ----->
// #include <stdio.h>

int main() {
    int age = 21;
    float height = 5.8;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Pi: %f\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}

==>
// Declaration vs Initialization in c programming language: ----->
1: Declaration  →  // Declaration is the process of defining a variable and its data type
2: Initialization  →  // Initialization is the process of assigning a value to a variable at
int age ;  // Declaration
age = 20;  // Initialization
int age  = 20;  // Declaration and Initialization

==>>
// C Is Statically Typed  , This means the variable's type is declared explicitly.
int age = 20;  // age is an integer.
// You cannot simply turn it into a string like: age = "hello"

==>>
sizeof() // sizeof() is a built-in operator in C that returns the size, in bytes, of a data type or variable. It is used to determine how much memory a particular data type or variable occupies in memory.
example : // #include <stdio.h>
int main() {
    int age = 20;
    printf("Size of age: %zu bytes\n", sizeof(age)); // Output: Size of age: 4 bytes (on most systems)
    return 0;
}





// -------------------------------------------> 03 [ Input in c ]  <----------------------------------- 
==>
// User Input with scanf()  →  // scanf() is a function in c , here you can input value from user and its store in variable .
// example 
 #include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // %d is a format specifier for integer
    printf("Your age is: %d\n", age);
    return 0;
}
// importent note :: 
// age    → variable- value
// &age   → variable- memory address

==>
// full example  of user input in c programming language: ----->
#include <stdio.h>

int main() {
    int age;
    float cgpa;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- Student Information ---\n");
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);
    printf("Grade: %c\n", grade);

    return 0;
}

//importent note ::
%.2f  // %.2f is a format specifier used in C programming to print floating-point numbers with two decimal places. The .2 indicates that you want to display two digits after the decimal point.  if out put is 3.1415 and you use %.2f then output is 3.14

==>
//  multiple input from user in c programming language: ----->
int age;
float cgpa;
scanf("%d %f", &age, &cgpa);




// -------------------------------------------> 04 [ Type Conversion and Constants ]  <----------------------------------- 
==>
type conversion in c programming language: ----->
1: Implicit Type Conversion (Type Casting)  →  // Implicit type conversion, also known as type casting, is a process in C programming where the compiler automatically converts one data type
// Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.

// For example, if you try to divide two integers, 5 by 2, you would expect the result to be 2.5. But since we are working with integers (and not floating-point values), the following example will just output 2:

int x = 5;
int y = 2;
int sum = 5 / 2;

printf("%d", sum); // Outputs 2

==>
// Constants in C programming language: ----->
// Now that you have seen different types of variables in C, you should also know that sometimes you need variables that should not change.

const myage = 10; // constant is a keyword that means you can not change value of the variable .
age = 30 // This will give an error because myage is a constant and cannot be changed.