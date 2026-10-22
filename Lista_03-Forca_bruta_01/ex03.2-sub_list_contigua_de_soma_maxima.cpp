#include <iostream>
#include <climits>

using namespace std;


int soma(int a[], int n){
    int maior=INT_MIN; //começa com o menor valor possível

    for (int i=0;i<n;i++){
        for (int j=i; j<n; j++) {
            int atual = 0;

            for (int k=i; k<=j; k++) {
                atual = atual + a[k];
            }

            if (atual>maior){
                maior=atual;
            }
        }
    }
    return maior;
}

int main(){
    int n = 9;
    int a[n]={10,5,-17,20,50,-1,3,-30,10};

    cout<<soma(a,n)<<endl;

    return 0;
}