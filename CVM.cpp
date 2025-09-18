/********************
* Автор: Сайбуу В.М *
* Дата: 18.09.2025  *
* Вариант 15        *
********************/

#include <iostream>
#include <cmath>

int main() {
    double a = 6.15, b = 1e-4, t = 18.5;
    double B = sqrt(a * b);
    double Bt = B * t;

    double Bt2 = Bt * Bt; // квадрат Bt
    double v1 = a * t * (1 - Bt2 / 3);
    double l1 = (a * t * t / 2) * (1 - Bt2 / 6); 

    double at = atan(Bt);
    double v2 = sqrt(a / b) * at;
    double l2 = (1 / b) * (Bt * at - 0.5 * log(1 + Bt2));

    std::cout.precision(4);
    std::cout << "V1=" << v1 << " m/s\n";
    std::cout << "V2=" << v2 << " m/s\n";
    std::cout << "L1=" << l1 << " m\n";
    std::cout << "L2=" << l2 << " m\n";

    return 0;
}