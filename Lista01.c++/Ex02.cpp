#include <iostream>

long long perimetro(long long a, long long b) {
    long long p = (a*2) + (b*2);
    return p;
}

int main() {
    long long a,b;
    std::cin>>a>>b;
    long long perimetro_retangulo=perimetro(a,b);
    std::cout<<perimetro_retangulo<<std::endl;
    return 0;
}