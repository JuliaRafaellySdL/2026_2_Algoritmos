#include <iostream>

bool primo(int n) {
    int i, divisores=1;
    
    for (i=1; i<n; ++i) {
        if ((n%i)==0) {
            divisores++;
        }
    }

    if (divisores==2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    std::cin>>n;
    bool resultado=primo(n);
    std::cout<<resultado<<std::endl;
    return 0;
}