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

int main(void) {
    puts ("Hello World!");
}