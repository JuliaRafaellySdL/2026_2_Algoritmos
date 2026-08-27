#include <iostream>

double area(double a) {
    double raio = a / 2;
    double resultado = 3.14159 * (raio * raio);
    return resultado;
}

int main() {
    double a;
    std::cin >> a;
    double area_total = area(a);
    std::cout << area_total << std::endl;
    return 0;
}

/*
0.785398
78.5397
1.96349e+09
7.85398e+09
3.14159e+10
1.9305
11970.7
1.19707e+14
3.14159e+18