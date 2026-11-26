#include <iostream>
#include "set.hpp"

int main() {
    set s;

    std::cout << std::boolalpha;
    std::cout << "Conjunto vazio: " << s.empty() << '\n';

    for (int i = 1; i <= 10; ++i) {
        s.insert(i * 2);
    }
    std::cout << "Tamanho apos inserir pares de 2 a 20: " << s.size() << '\n';

    for (int i = 1; i <= 5; ++i) {
        const bool inserted = s.insert(i * 3);
        std::cout << "Inseriu " << i * 3 << "? " << inserted << '\n';
    }
    std::cout << "Tamanho apos as novas insercoes: " << s.size() << '\n';
    std::cout << "Busca por 12: " << s.find(12) << '\n';
    std::cout << "Busca por 99: " << s.find(99) << '\n';

    std::cout << "Removeu 12? " << s.erase(12) << '\n';
    std::cout << "Removeu 12 novamente? " << s.erase(12) << '\n';
    std::cout << "Tamanho apos remocao: " << s.size() << '\n';

    s.clear();
    std::cout << "Vazio apos clear: " << s.empty() << '\n';
    std::cout << "Tamanho apos clear: " << s.size() << '\n';

    return 0;
}
