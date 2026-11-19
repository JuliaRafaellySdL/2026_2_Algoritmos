#include <chrono>
#include <iostream>
#include "vector.hpp"

int main(int argc, char **argv){
    vector v1;
    int n;
    auto inicio=std::chrono::high_resolution_clock::now();
    std::cin>>n;
    while (n != -1){
        v1.push_back(n);
        std::cin>>n;
    }

    auto fim = std::chrono::high_resolution_clock::now();
    auto duracao = std::chrono::duration_cast<std::chrono::milliseconds>(fim-inicio).count();
    std::cerr<<"Tempo de execução: "<<duracao<<"ms."<<std::endl;
    std::cout<<"Elementos lidos: "<<v1.size()<<std::endl;
    std::cout<<"Capacidade total: "<<v1.capacity()<<std::endl;
    return 0;
}