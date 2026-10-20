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