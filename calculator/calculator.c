#include <stdio.h>   
#include <stdlib.h>  
int main(void) {

    // Declare variables to store user input and the result
    double x, y;       // operands
    char op;           // operator 
    double result = 0; // stores the final result

    // Prompt the user for an operation
    printf("Enter an operation (example: 5 + 3): ");

    // Read two numbers and an operator from user input
    scanf("%lf %c %lf", &x, &op, &y);

    // Perform the operation based on the operator entered
    if (op == '+')
        result = x + y;
    else if (op == '-')
        result = x - y;
    else if (op == '*')
        result = x * y;
    else if (op == '/') {
        // Prints error message if user inputs zero as operand
        if (y == 0)
            printf("Error: cannot divide by zero\n");
        else
            result = x / y;
    } else {
        // If the operator is not recognized, print error message
        printf("Error: invalid operation\n");
        return 0;  // Exit early since operation is invalid
    }

    // Display the final result
    printf("Result: %.2lf\n", result);

    return 0; // End of program
}
