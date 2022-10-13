// include header file
#include "./headers/BasicIO.h"

// write code for the functions declare
// in the header file

// this function will use printf an dputs
// the output data to stdout(terminal)
void output(void)
{
    // printf formats and outputs a series
    // of characters and values to stdout.
    // it does not append a new line character
    // to the end of its output
    printf("Your first name is %s\n", FIRST_NAME);
    printf("Your last name is %s\n", LAST_NAME);
    printf("Your weight is %f and your age is %d\n", WEIGHT, AGE);


    // puts outputs a string (char *) to stdout
    // it does append a new line character to the end of its output
    puts(FIRST_NAME);
    puts(LAST_NAME);
}

// this function will use scanf to input data from stdin
void input(void){
    // declare variables to store input data 
    int age;
    float weight;
    char name[] = "";


    // input an integar 
    printf("Enter your age: ");
    // scanf reads the value from stdin per
    // the type specified in the format specfier
    // and stores it in the address of the specified variable
    // specified variable
    scanf("%d", &age);

    // input a float
    printf("\nEnter your weight: ");
    scanf("%f", &weight);
    printf("Entered weight is: %.2f", weight);

        // input a string (char *)
    printf("\nEnter your name: ");
    scanf("%s", &name);
    printf("Entered name is: %s", name);
}