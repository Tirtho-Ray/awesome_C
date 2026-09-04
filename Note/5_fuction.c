// Learn function  ===>

// A function is a named block of code designed to perform a specific task.
// we can use function to break down a complex problem into smaller, manageable parts. Functions help in code reusability and improve readability.

// void     sayHello     ()
//  │          │          │
//  │          │          └── parameters
//  │          └──────────── function name
//  └─────────────────────── return type



#include <stdio.h>

void sayHello() {
    printf("Hello, World!\n");
}

int main() {
    sayHello(); 
    return 0;
}

// #include <stdio.h>
// int add (int a, int b) {
//     return a + b;
// }
// int main() {

//     int result = add(5, 10);
//     printf("The sum is: %d\n", result);
//     return 0;
// }