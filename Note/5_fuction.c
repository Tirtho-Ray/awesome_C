// Learn function  ===>

// A function is a named block of code designed to perform a specific task.
// we can use function to break down a complex problem into smaller, manageable parts. Functions help in code reusability and improve readability.

// void     sayHello     ()
//  │          │          │
//  │          │          └── parameters
//  │          └──────────── function name
//  └─────────────────────── return type



#include <stdio.h>

// function definition
// void sayHello() {
//     printf("Hello, World!\n");
// }

// int main() {
//     sayHello();  // use the function
//     return 0;
// }

// #include <stdio.h>
// int add (int a, int b) {  // here a and b are parameters
//     return a + b; // return type is int
// }
// int main() {

//     int result = add(5, 10); // here 5 and 10 are arguments
//     printf("The sum is: %d\n", result);
//     return 0;
// }


// loop with fuction

#include <stdio.h>
void printNumbers(int n) {
    for ( int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNumbers(n); // calling the function
    return 0;
}