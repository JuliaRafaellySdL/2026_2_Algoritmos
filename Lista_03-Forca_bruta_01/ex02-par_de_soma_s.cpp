/*
2. Problema Par de soma s
Este problema consiste em, dado um array de n (1 ≤ n ≤ 106) números inteiros ai (−108 ≤ ai ≤ 108) e um número
inteiro S, determinar se existe um par de números no array cuja soma seja S.
Exemplo: Para S = 15, no array { 1 4 9 13 18 20 32 45 } não existe um par de números no array cuja soma seja
15. Já no array { 10 20 9 1 63 6 5 12 } existem dois pares: 9 + 6 = 15 e 10 + 5 = 15.
*/

#include <iostream>

using namespace std;

int soma(int a[],int n, int s) {
    int i, j;
    for (i=0;i<n;i++)
        for (j=i+1; j<n; j++)
            if (a[i] + a[j] == s)
                return 1;
    return 0;
}

int main(){
    int n, s;

    cout<<"n= ";
    if (!(cin>>n)) return 0;

    cout << "s= ";
    cin>>s;

    int a[n];
    cout<<"a= ";
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    if (soma(a,n,s)) {
        cout <<"S"<<endl;
    } else {
        cout <<"N"<<endl;
    }
}