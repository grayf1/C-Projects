// include pre-processor directive
#include "./headers/AssignmentB.h"
/* write function for question 1 */
int genFactorial(int n)
{
    // declare loop counter variable
    int i;
    int result;

    printf("Factorials - Normal Variables\n");

    for (i = 1; i <= n; i++) {
      result= result*i;
    }
   return result;
}

/* write function for question 2 */
int genFactorialReference(int n){
    
    // declare loop counter variable
    int i;
    int result;
    int *n;
    printf("Factorials - Normal Variables\n");

    for (i = 1; i <= *n; i++) {
      result= result*i;
    }
   return result;
}

/*
number = 6
x = number.-1
loop do
	number = number*x
	x = x.-1
	break if x.<=1
end
puts number

# 2. Write a function named gen_factorial that computes and returns
# the factorial of a number. It must have one integer input parameter 
# that contains the number for which a factorial is to be computed.

def gen_factorial number
	x = number.-1
	loop do
	number = number.*x
	x = x.-1
	break if x.<=1
	end
	number
	end*/


