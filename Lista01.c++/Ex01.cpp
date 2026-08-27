#include <iostream>

int soma(int a, int b) {
    int r = a + b;
    return r;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    int s = soma(a, b);
    std::cout << s << std::endl;
    return 0;
}

//RESPOSTAS DAS ADIÇÕES
// 10 20                    = 30
// -10 10                   = 0
// -2 -3                    = -5
// 1000000000 1000000000    = 2000000000
// −1000000001 1000000005   = -123049392
// 2000000000 1000000000    = -1294967296
// −1212121212 −2987654321  = 1920236112