// ScientificCalculator.h
#ifndef SCIENTIFICCALCULATOR_H
#define SCIENTIFICCALCULATOR_H

#include "calculator.h"

class ScientificCalculator : public Calculator {
public:
    int Add(int a, int b) override;
    double Power(double base, int exponent);
};

#endif // SCIENTIFICCALCULATOR_H
