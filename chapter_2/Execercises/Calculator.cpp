#include <iostream>
#include <stdexcept>
#include "Operation.h"

using namespace std;

struct Calculator
{
    Operation op;

    Calculator(Operation operation)
    {
        op = operation;
    }

    int calculate(int a, int b)
    {
        switch (op)
        {
            case ADD:
                return a + b;
            case SUBTRACT:
                return a - b;
            case MULTIPLY:
                return a * b;
            case DIVIDE:
                return a / b;
            default:
                throw invalid_argument("Invalid operation.");
        }
    }

};

int main()
{
    Calculator calculator(ADD);
    cout << "Result of addition: " << calculator.calculate(5, 3) << endl;
    Calculator calculator2{SUBTRACT};
    cout << "Result of subtraction: " << calculator2.calculate(5, 3) << endl;
    Calculator calculator3{MULTIPLY};
    cout << "Result of multiply: " << calculator3.calculate(5, 3) << endl;

}