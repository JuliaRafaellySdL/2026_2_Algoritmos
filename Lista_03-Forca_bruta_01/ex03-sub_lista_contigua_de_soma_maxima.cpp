/*
Problema Sub-lista contígua de soma máxima.
Considere um array A de n elementos. Exemplo: A = 10, 5, −17, 20, 50, −1, 3, −30, 10
O problema consiste em encontrar a maior subsequencia consecutiva cuja soma seja a maior possível. No caso do
vetor A a maior soma é 72, que é a soma dos elementos entre os índices 3 e 6 : 20+ 50+−1+ 3. Não há soma maior
do que esse de elementos consecutivos no vetor A. A soma deve possuir pelo menos um elemento, dessa forma não
consideramos a soma nula. A sublista deve possuir, pelo menos, um elemento. A figura a seguir ilustra o problema,
onde a área sombreada representa a sub-lista contígua de soma máxima.
*/

#include <iostream>
#include <vector> //permite modificar o array
#include <climits>

using namespace std;

int soma(const vector<int>& A, int n){
    int maior=INT_MIN; //começa com o menor valor possível

    for(int i=0;i<n;i++) {
        for (int j=i; j<n; j++) {
            int atual=0;

            for (int k=i;k<=j;k++){
                atual+=A[k];
            }

            if (atual>maior){
                maior=atual;
            }
        }
    }
    return maior;
}

int main(){
    int n;
    cout<<"Quantidade de elementos: ";
    cin>>n;

    vector<int> A(n); //vetor de inteiros com array de n elementos
    cout<<n<<" números: ";
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<soma(A,n)<<endl;
    return 0;
}

//big oh= O(n³)