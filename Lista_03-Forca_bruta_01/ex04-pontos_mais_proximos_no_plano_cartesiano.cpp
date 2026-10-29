#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <cfloat>

using namespace std;

double distancia(const vector<pair<int, int>>& coordenadas, int i, int j) {
    double dx = coordenadas[i].first - coordenadas[j].first;
    double dy = coordenadas[i].second - coordenadas[j].second;

    return sqrt(dx * dx + dy * dy);
}

struct resultado { //cria um tipo de variável resultado (p1,p2,distancia)
    int p1; // recebe uma coordenada (x,y)
    int p2;
    double distancia;
};

resultado menor(const vector<pair<int, int>>& coordenadas, int n) {
    double menor = DBL_MAX;
    int p1 = -1;
    int p2 = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double d = distancia(coordenadas, i, j);

            if (d < menor) {
                menor = d;
                p1 = i;
                p2 = j;
            }
        }
    }

    return {p1, p2, menor};
}

int main() {
    int n;

    cout << "Quantidade de coordenadas: ";
    cin >> n;

    if (n < 2) {
        cout << "Informe pelo menos duas coordenadas.\n";
        return 1;
    }

    vector<pair<int, int>> coordenadas;

    for (int i = 0; i < n; i++) {
        int x, y;

        cout << "Coordenada " << i << ": ";
        cin >> x >> y;

        coordenadas.push_back({x, y});
    }

    resultado resultado = menor(coordenadas, n);

    cout << "Pontos mais próximos: ("
         << coordenadas[resultado.p1].first << ", "<< coordenadas[resultado.p1].second << ") e ("<< coordenadas[resultado.p2].first << ", "<< coordenadas[resultado.p2].second << ")\n";

    cout << "Distância: " << resultado.distancia << endl;

    return 0;
}