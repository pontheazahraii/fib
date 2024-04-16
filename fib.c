#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @name fib
 * @brief a recursive definition of the Fibonacci sequence
 * @param n is the Fibonacci number to be calculated
 * @return the Fibonacci number
 */
unsigned int fib(unsigned int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

// main function more comment
int main(int argc, char *argv[]) {
    // If no arguments were supplied, print a few Fibonacci numbers
    if (argc == 1) {
        // Calculate a few Fibonacci numbers
        unsigned int fib10 = fib(10);
        unsigned int fib20 = fib(20);
        unsigned int fib30 = fib(30);

        // Print a few Fibonacci numbers
        printf("10: %d\n", fib10);
        printf("20: %d\n", fib20);
        printf("30: %d\n", fib30);
    } else {
        // If one or more arguments were supplied, calculate the Fibonacci
        // number of each argument
        for (unsigned int i = 1; i < argc; i++) {
            // Check that the argument supplied contains a valid number
            for (unsigned int j = 0; j < strlen(argv[i]); j++) {
                if (!isdigit(argv[i][j])) {
                    printf("Error: arguments must be valid numbers.");
                    return 1;
                }
            }
            // Convert the input character(s) to an integer
            int input = atoi(argv[i]);
            if (!(input >= 0)) {
                printf("Error: arguments must be positive numbers.");
                return 1;
            }
            // Print the Fibonacci number of the input value
            printf("%d: %d\n", input, fib(input));
        }
    }

    return 0;
}
