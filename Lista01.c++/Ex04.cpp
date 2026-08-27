#include <iostream>
int postes(int m, int p) {
    int qtd_postes=(m/p)+1;
    if (m%p!=0) {
        qtd_postes=qtd_postes+1;
    }

    return qtd_postes;
}

int main() {
    int m,p;
    std::cin>>m>>p;
    int resultado=postes(m,p);
    std::cout<<resultado<<std::endl;
    return 0;
}