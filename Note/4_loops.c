// loops in c programming language ------->
 // what is loops ?
//  -> loops means one task work again by again however condition is not false 
// Loops can execute a block of code as long as a specified condition is true.
// Loops are handy because they save time, reduce errors, and they make code more readable.
// if we print ("hello world") text 100 time so we need write printf("hello world") 100x time but if we use loop then we jest say print this 100 time then its print.


==>
printf("1\n");
printf("2\n");
printf("3\n");
printf("4\n");
printf("5\n"); // this type 100x time 

for (int i = 0; i <= 100; i++) {
    printf("%d\n", i);
}

there are 3 kind of loops in c programming 
1: for,
2: while,
3: do while 


// for loop in c  -------->

for (initialization; condition; update) { // syntax of for loop
    // code
}

#include <stdio.h>

int main() {
    for(int i = 0; i <=100; i++){
        printf("%d",i);
    }
    return 0;
}



// how work ??
---> here initialization int i = 1  , condition 1<=100 : means print 100 time equal .
// if condition is true then loop run , when its false then its not run 
i++ // update the . count incrcss 1.

int i = 1
    ↓
i <= 5 ?
    ↓
  TRUE
    ↓
printf(i)
    ↓
i++
    ↓
i <= 5 ?
    ↓
  TRUE
    ↓
...
    ↓
i = 6
    ↓
i <= 5 → FALSE
    ↓
EXIT



// while loop -> 
while (condition) {
    // code
}

#include <stdio.h>>
int main () {
    int num = 1;
    while (num <= 100)
    {
       printf("%d",num);
       num++;
    }
    
}

// here work is same but here initial first then condition and then update the number 


// do while ->

do {
    // code
} while (condition);

#include <stdio.h>
int main () {
    int i = 1;
    do
    {
       printf("%d"i);
       i++;
    } while (i<=100);
return 0;
    
}

