#include <iostream>

int divisores(int n) {
    int i,qtd=1;
    for (i=1;i<n;++i){
        if ((n%i)==0){
            qtd++;
        }
    }
    return qtd;
}

int main() {
    int n;
    std::cin>>n;
    int resultado=divisores(n);
    std::cout<<resultado<<std::endl;
}