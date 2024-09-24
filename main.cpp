#include "src/calculator.h"

int main() {
        // additon
    calculator(0, '+', 0);
    calculator(1, '+', 1);
    calculator(1.1, '+', 1.1);
    calculator(-1, '+', -1);
    calculator(10000000000, '+', 10000000000);    
    // subtraction
    calculator(0, '-', 0);
    calculator(2.2, '-', 1.2);
    calculator(-1, '-', -1);
    calculator(10000000000000, '-',100000000);
    // multiplication
    calculator(2.2, '*', 2);
    calculator(2, '*', 0);
    calculator(-2, '*', 2);
    calculator(-2, '*', -2);
    calculator(1000000000, '*', 10000000000);
    // dividing
    calculator(4.2, '/', 2);
    calculator(4, '/', 0);
    calculator(4, '/', -2);
    calculator(40000000, '/', 4000);	
   //character testing
   calculator(1, '&', 1);
    return 0;
}
