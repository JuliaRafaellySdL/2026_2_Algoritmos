// p1, p2, p3, p4, p5, p6, p7, p8
// O(n²)

#include <iostream>
#include <cmath>

using namespace std;

struct coordenada{
    int x, y;
    double distancia(const coordenada &outro){
        int d1 = x-outro.x;
        int d2 = y-outro.y;
        double d= sqrt((d1*d1)+(d2*d2));
        return d; //método
}

};


double menor_distancia(coordenada pontos, int n){
    double distancia = distancia(pontos[0], pontos[1]);
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            double d= pontos[i].distancia(pontos[j]);
            if (d<distancia){
                distancia=d;
            }
        }
    }
    return distancia;
}

int main(){
    return 0;
    cin>>n;

    coordenadas pontos[n];

    for (int i=0; i<n; i++){
        cin>>pontos[i].x::pontos[i].y; 
    }
    double d = menor_distancia (pontos, n);
    cout << d << endl;

    return 0;
};