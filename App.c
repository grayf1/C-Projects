/*
creator of Objective C: Brad Cox; he wanted a better C, created in 1980

How to interact with C:
Platform independent: C may be run on any operating system as long
as the platform C complier and runtime enviroment installed

C language library: stdio.h, math.h, stdlib.h, etc.

Complied: GNU C/C++ complier; the code has to grow through a build
 process before the code can be executed
 Four Steps
1. Pre-processing
2. Compiling
3. Assembling
4. Linking

Procedural: Supports structured programming which means it's
based on the concept of calling functions

Weakly Typed: a variable can change depending on the context in which it's being used

Statically Typed: types are checked at chimple time.
*/

#include <stdio.h>
#include <stdlib.h>
#include "./headers/BasicIO.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Pointers.h"
#include "./headers/PassByReference.h"
#include  "./headers/AssignmentB.h"

int main(void)
{
    // puts ("Hello World!");
    // Testing basic IO
    // output();
    // input();
    // testing decisions functionality
    // decisions1();
    // decisions2();
    // decisions3();
    // decisions4();
    // decisions5();
    // decisions6();
    // testing loops functionality
    /* loops1();
     loops2();
     loops3();
     loops4();
     loops5();*/
    // testing function functionality
    //  declare 3 charcater arrays and initialize them
    /* char student[] = "Faith";
     char course[] = "Ruby";
     char programmer[] = "Yuki Matsumoto";
     congratulate1(student, course, programmer);
     congratulate2(student, course, programmer);
     printf("%.2f degrees celsius = %.2f degrees fahrenheit\n",
     0.0, fahrenheitFromCelsius(0.0)); */

    // testing pointers functionality
    // printAddress();
    /* printf("The global variable i stores its value at %p\n", getAddress());
     printf("The global static variable i stores %d\n", getDataAddress());
     printf("The global static variable j now stores %.2f\n", storeDataAddress());
     printf("The size of the value in the global static variable j is %d\n", getDoubleBytes());
     printf("The size of the pointer in the global static variable j is %d\n", getPointerToDoubleBytes());
     pointerToNull();*/
    // testing pass by reference functionality
    // declare doubles for (x,y) point
   /* double x = 3.0;
    double y = 4.0;

    // declare doubles for (radiusPtr, thetaPtr)
    double radiusPtr;
    double thetaPtr;

    // call cartesianToPolar
    // must use the & to access an address of a variable
    cartesianToPolar(x, y, &radiusPtr, &thetaPtr);
    printf("(%.2f, %.2f) equals (%.2f, %.2f)\n", x, y, radiusPtr, thetaPtr);*/

    int n = 4;
    genFactorial(n);
    printf("The factorial of %d is %d\n", n, genFactorial(n));

    genFactorialReference(&n);
}
