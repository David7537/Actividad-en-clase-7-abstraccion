#include <iostream>
#include "sum.h"
#include "sub.h"
#include "mult.h"
#include "div.h"

int main() {
    Suma suma;
    Resta resta;
    Multiplicacion multiplicacion;
    Division division;

    std::cout << "sum(1, 5) = " << suma.operar(1, 5) << '\n';
    std::cout << "sub(5, 1) = " << resta.operar(5, 1) << '\n';
    std::cout << "mul(3, 4) = " << multiplicacion.operar(3, 4) << '\n';
    std::cout << "div(9, 3) = " << division.operar(9, 3) << '\n';

    return 0;
}
