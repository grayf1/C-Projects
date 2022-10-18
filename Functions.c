// include pre processor directives
#include "./headers/Functions.h"


/* this function has 3 parameters, all having char *. 
when you have a * in the type of a parameter it means the parameter is a pointer
pointers refer to memory locations instead of holdnig values 
char * means the parameters refer to a memory location that would store 
a colectio nof characters. This is how C deals with Strings. There is 
no string type in C; there is char *
*/
void congratulate1(char *student, char *course, char *programmer){
    printf("%s has done has much %s programming as %s. \n", 
    student, course, programmer);
    congratulate2(student, course, programmer);
}

// this function has 3 parameters and it has a local variable
void congratulate2(char *student, char *course, char *programmer ){
// declare and initalize a local varable by calling strlen function 
int days = strlen(programmer);

printf("%s has done has much %s programming as %s. could fit into %d days\n", 
    student, course, programmer, days);
}

/* this function has 1 parameter and it will return a value 
it will take a celsius temp and convert it to fahrenheit and return the fahrenheit temp*/
float fahrenheitFromCelsius(float celsius){
    // declare local variable and initialize it using macro expression 
    float fahrenheit = fahrenheit(celsius);
    // return value in local variable
    return fahrenheit;
}