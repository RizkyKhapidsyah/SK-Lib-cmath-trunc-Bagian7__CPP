#include <cmath>
#include <iostream>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main() {
    std::cout << std::fixed
        << "trunc(+2.7) = " << std::trunc(+2.7) << '\n'
        << "trunc(-2.9) = " << std::trunc(-2.9) << '\n'
        << "trunc(-0.0) = " << std::trunc(-0.0) << '\n'
        << "trunc(-Inf) = " << std::trunc(-INFINITY) << '\n';

    _getch();
    return 0;
}