#pragma once
#ifndef QUADRATICEQUATIONH
#define QUADRATICEQUATIONH

#include <math.h>
#include <complex.h>
typedef struct {
    double real;
    double imag;
} Complex;

struct solution_t {
    Complex x1 = { 0,0 };
    Complex x2 = { 0,0 };
};

solution_t solve_equation(double a, double b, double c);
#endif