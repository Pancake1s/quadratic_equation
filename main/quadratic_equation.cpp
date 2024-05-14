#include "quadratic_equation.h"

solution_t solve_equation(double a, double b, double c) {
    solution_t solution;
    double discriminant = b * b - 4 * a * c;
    if (a == 0) return solution;
    if (discriminant > 0) {
        solution.x1.real = (-b + sqrt(discriminant)) / (2 * a);
        solution.x2.real = (-b - sqrt(discriminant)) / (2 * a);
    }
    else if (discriminant == 0) {
        solution.x1.real = (-b) / (2 * a);
        solution.x2 = solution.x1;
    }
    else {
        // Handle complex roots
        solution.x1.real = -b / (2 * a);
        solution.x1.imag = sqrt(-discriminant) / (2 * a);
        solution.x2.real = -b / (2 * a);
        solution.x2.imag = -sqrt(-discriminant) / (2 * a);
    }
    return solution;
}