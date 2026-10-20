/*
Clara está organizando as fotos da sua última viagem num álbum de fotos. Como ela tem muitas fotos, para
economizar páginas do álbum ela quer colar duas fotos por página do álbum.
Como as fotos são retangulares, as fotos podem ser coladas giradas (mas sempre com lados paralelos aos da página
do álbum, para preservar o equilíbrio estético do álbum), mas elas devem sempre ficar inteiramente contidas no
interior da página, e não devem se sobrepor.
Em geral, das muitas formas de posicionar as fotos do álbum só algumas (ou nenhuma) satisfazem estas restrições,
então pode ser difícil decidir se é possível colar as duas fotos em uma mesma página do álbum, e por isso Clara
pediu a sua ajuda para escrever um programa que, dadas as dimensões da página e das fotos, decide se é possível
colar as fotos na página. Por exemplo, cada página pode ser 5 × 7, e duas fotos são 3 × 4. Nesse caso, é possível
colar as duas fotos:

A primeira linha da entrada contém dois inteiros X e Y (1 ≤ X, Y ≤ 1000), indicando a largura e a altura da
página do álbum. Cada uma das duas linhas seguintes contém dois inteiros L e H (1 ≤ L, H ≤ 1000), indicando a
largura e a altura das fotos.
O programa deve imprimir uma única linha, contendo um único caractere: ’S’, se é possível colar as duas fotos na
página do álbum, e ’N’, caso contrário.
Exemplos de entrada e saída para a execução do programa:
*/

#include <iostream>

using namespace std;

bool cabe(int x, int y, int l1, int h1, int l2, int h2) {
    if ((l1+l2 <= x) && (max (h1, h2) <= y)) return true;
    if ((max(l1,l2) <= x) && (h1+h2 <= y)) return true;

    return false;
}

int main() {
    int x, y; //pagina
    int l1, h1; //foto 1
    int l2, h2; //foto 2

    cout <<"Tamanho do papel (largura altura): ";
    cin >> x >> y;

    cout <<"Tamanho da foto 1 (largura altura): ";
    cin >> l1 >> h1;

    cout <<"Tamanho da foto 2 (largura altura): ";
    cin >> l2 >> h2;

    //formatos possíveis
    if (cabe(x,y,l1,h1,l2,h2)) {cout<<"S"<<endl;return 0;}
    if (cabe(x,y,l1,h1,h2,l2)) {cout<<"S"<<endl;return 0;}
    if (cabe(x,y,h1,l1,l2,h2)) {cout<<"S"<<endl;return 0;}
    if (cabe(x,y,h1,l1,h2,l2)) {cout<<"S"<<endl;return 0;}

    cout <<"N"<<endl;

    return 0;
}

// Big-OH = O(1)