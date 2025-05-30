#date: 16/5/25
//1. **Header Files and Main Function**


#include <stdio.h>    // Standard input/output functions
#include <stdlib.h>   // General utilities

int main() {
    // Code goes here
    return 0;
}


// 2. **Input and Output**


// Output
printf("Hello, World!\n");

// Input
int num;
scanf("%d", &num);     // Reads an integer


//3. **Variables and Data Types**


int age = 20;
float price = 10.5;
char grade = 'A';


/*
4. **Operators**

* Arithmetic: `+`, `-`, `*`, `/`, `%`
* Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
* Logical: `&&`, `||`, `!`
* Assignment: `=`, `+=`, `-=`, `*=`, `/=`
*/

//5. **Control Statements**

//If Statement:

if (age >= 18) {
    printf("Adult\n");
} else {
    printf("Minor\n");
}


// Switch Case:


switch (grade) {
    case 'A': printf("Excellent"); break;
    case 'B': printf("Good"); break;
    default: printf("Try again");
}


//6. **Loops**

// For Loop:


for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}


//While Loop:


int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}


// Do-While Loop:


int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);


// 7. **Functions**


int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d", add(2, 3));
}


// 8. **Arrays**


int numbers[5] = {1, 2, 3, 4, 5};
printf("%d", numbers[0]);


// 9.Pointers
int x = 10;
int *ptr = &x;
printf("Value: %d, Address: %p", *ptr, ptr);


//10. **Comments**


// Single-line comment

/* Multi-line
   comment */



