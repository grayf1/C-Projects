// include header file
#include "./headers/Decisions.h"

// write code for the functions
// defined in the header file

// this function will use the comparison operators
// and the if, if else, if else if statements

void decisions1(void)
{
    // declare the variables of type float
    // initialize it using constant defined in header file
    float num = NUM;

     // use if statement 
     if (num < 40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);

     }

     num += num;
     // use if else statement
      if (num < 40000.0){
        printf("Num (%.2f) is less than 40000.0 \n", num);

     } else {
        printf("Num (%.2f) is not less than 40000.0 \n", num);
     }

     num = 0.0;

    // use if-else-if statement
    if (num == 0.0)
    {
        printf("Num (%.2f) is equal to 0.0. \n", num);
    }
    else if (num < 40000.0)
    {
        printf("Num (%.2f) less than to 40000.0. \n", num);
    }
    else
    {
        printf("Num (%.2f) is not less than to 40000.0. and not equal to  \n", num);
    }
}

// this function will use the logical operators.
void decisions2(void)
{
    float num = NUM;

    // use logical AND operator
    // both conditions must be true
    if (num > 0.0 && num < 40000.0)
    {
        printf("Num (%.2f) is between 0.0 and 40000.0 \n", num);
    }

    // use the logical OR operator
    // only one condition must be true
    if (num > 0.0 || num < 40000.0)
    {
        printf("Num (%.2f) is between 0.0 or 40000.0 \n", num);
    }

    // use the logical NOT operator
    // it inverses the bool value
    if (!(num > 0.0 && num < 40000.0))
    {
        printf("Num (%.2f) is not between 0.0 and 40000.0 \n", num);
    }
}

// this function will use a bool variable
void decisions3(void)
{
    // declare the variables of type float
    // initialize it using constant defined in header file
    float num = NUM;

    // declare a variable of type bool and initialize it
    bool isNotBetween = (!num > 0.0 && num < 40000.0);

    // use bool variable in an if else stateent
    if (isNotBetween)
    {
        printf("Num (%.2f) is not between 0.0 and 40000.0 \n", num);
    }
    else
    {
        printf("Num (%.2f) is between 0.0 and 40000.0 \n", num);
    }
}

// this function will use the ternary operator
void decisions4(void)
{
    // declare the variables of type float
    // initialize it using constant defined in header file
    float num = NUM;

    // declare a variable of type bool and initialize it
    bool isNotBetween = (!num > 0.0 && num < 40000.0);

    // declare a variable of a type of float and initialize it using the ternary operator
    // only operator that has three operands
    float extra = isNotBetween ? (num - 40000.0) : 0.0;

    // display the value in extra
    printf("Extra is %.2f\n", extra);
}

// this function will use a switch statement
void decisions5(void)
{
    // declare variables
    char operation;
    int num1;
    int num2;

    // inout operation
    printf("Enter operation to be performed (+, - , * ,/)");
    scanf("%c", &num1);

    // input numbers
    printf("Enter first number");
    scanf("%d", &num1);

    printf("Enter second number");
    scanf("%d", &num2);

    // use switch statement to evaluate operation
    switch (operation)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;

    default:
        printf("Invalid Operation");
        break;
    }
}

// this function will examine short circut evaluation
// the complier skips the evaluation of sub-expressions in a logical expression
void decisions6(void)
{
    // declare variables that will be used in logical expression
    int x = 1;
    bool y = true;

    // since x == 1 is true, the second expression is evaluated
    // short circut evaluation will not take place
    if (x == 1 && y)
    {
        printf("If block executed.\n");
    }
    else
    {
        printf("Else block executed.\n");
    }

    // since x == 2 is false, the second expression is evaluated
    // short circut evaluation will take place
    if (x == 2 && y)
    {
        printf("If block executed.\n");
    }
    else
    {
        printf("Else block executed.\n");
    }

    y = false;

    // since x != 1 is false the second expression is evaluated short circut evalution will not take place
    if (x != 1 || y)
    {
        printf("If block executed.\n");
    }
    else
    {
        printf("Else block executed.\n");
    }

    // since x == 1 is true, the second expression is evaluated
    // short circut evaluation will not take place
    if (x == 1 || y)
    {
        printf("If block executed.\n");
    }
    else
    {
        printf("Else block executed.\n");
    }
}