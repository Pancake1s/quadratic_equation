#include "quadratic_equation.h"
#include <stdio.h>
#include <assert.h>

int main() {
    solution_t solution;

    // Test 1: Real roots
    solution = solve_equation(1, -3, 2);
    assert(solution.x1.real == 2 && solution.x1.imag == 0);
    assert(solution.x2.real == 1 && solution.x2.imag == 0);

    // Test 2: Complex roots
    solution = solve_equation(1, 2, 2);
    assert(solution.x1.real == -1 && solution.x1.imag == 1);
    assert(solution.x2.real == -1 && solution.x2.imag == -1);

    // Test 3: One repeated real root
    solution = solve_equation(1, -2, 1);
    assert(solution.x1.real == 1 && solution.x1.imag == 0);
    assert(solution.x2.real == 1 && solution.x2.imag == 0);

    // Test 4: Zero coefficients
    solution = solve_equation(0, 0, 0);
    assert(solution.x1.real == 0 && solution.x1.imag == 0);
    assert(solution.x2.real == 0 && solution.x2.imag == 0);

    printf("All test cases passed!\n");
    return 0;
}