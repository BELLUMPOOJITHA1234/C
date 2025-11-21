
#include <stdio.h>

int main() 
{
    // Variables for the first expression
    int a, b, c, d, result1;

    // Variables for the second expression
    int i, j;

    // Input values for the first expression
    printf("Enter values for a, b, c, and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Evaluate the first expression: a/b*c - b + a*d/3
    result1 = a / b * c - b + a * d / 3;
    printf("Result of expression (a/b*c - b + a*d/3): %d\n", result1);

    // Input value for i in the second expression
    printf("Enter value for i: ");
    scanf("%d", &i);

    // Evaluate the second expression: j = (i++) + (++i)
    j = (i++) + (++i);

    // Display the results
    printf("Value of j after evaluating (i++) + (++i): %d\n", j);
    printf("Final value of i: %d\n", i);

    return 0;
}