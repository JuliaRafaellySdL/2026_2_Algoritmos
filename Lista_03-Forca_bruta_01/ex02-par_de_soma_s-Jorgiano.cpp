#include <iostream>
using namespace std;

//    0  1  2  3  4  5  6  7  8  9
// a=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

bool tem_par(int a[], int n, int s){
    bool resposta = false;

    for (i=0; i<n; i++){
        for (j=i+1;j<n;j++){
            if (a[i]+a[j]==s){
                resposta=true;
            }
        }
    }
    return resposta;
}

 /*  for (i=0; i<n; i++){
        for (j=0;j<n;j++){
            if (i!=j and a[i]+a[j]==s){
                resposta=true;
            }
        }
    }
*/

/*
    for (i=0; i<n; i++){
        for (j=i+1;j<n;j++){
            if (a[i]+a[j]==s){
                resposta=true;
            }
        }
    }
    return false;
*/

int main(){
    int n=10, s=42;
    int a[n] = {1,4,7,23,4,6,43,2,3,23};
    if(tem_par(a, n ,s)){
        cout<<"Sim!\n";
    }else{
        cout<<"Não\n"
    }
    return 0;
}