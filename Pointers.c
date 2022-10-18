// include pre processor directives
#include "./headers/Pointers.h"

/* each variable and function gets stored in memory (in the stack)
the location in memory is where it's stored is referred to as
its address. unlike other variables that store values of a certain type
(like int, float, etc.), a pointer is a variable
that stored an address. an integer variable stores an interger
value. an integer pointer stores the address of an integer
variable. we can have poniters to charcaters integers doubles etc.
we can even have pointers to functipns. pointers get stored in the heap
 */

// this function prints the address of itself
void printAddress(void)
{
    // the %p format specifier used in the format string is
    // a placeholder for an address
    printf("The printAddress function is stored at %p\n", printAddress);
}

// this function returns the address of the global variable i
int *getAddress(void)
{
    // declare a pointer to an integer
    // the * is needed when declaring a pointer
    int *ptr;

    // get the address of global variable i and store it in pointer
    // must use the & when accessing an address of a variable the *
    // is not needed when storing an address in a pointer
    ptr = &i;

    // return pointer
    // the * is not needed when returning an address in a pointer
    return (ptr);
}

// this function returns the value stored at the address of the global variable i
int getDataAddress(void)
{
    // declare a pointer to an integer
    // the * is needed when declaring a pointer
    int *ptr;

    // get the address of global variable i and store it in pointer
    // must use the & when accessing an address of a variable the *
    // is not needed when storing an address in a pointer
    ptr = &i;

    // return the value stored at the pointer
    // the * is  needed when accessing a value at an address in a pointer
    return (*ptr);
}