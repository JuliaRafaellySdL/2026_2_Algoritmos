#include <iostream>
#include "set.hpp"

using namespace std;

int main(){
    set s;
    for (int i = 1; i <=10; i++){
        s.insert(i*2);
    }
    cout<<"Tamanho do conjunto: "<<s.size()<<endl;
    for (int i = 1; i <=5; i++){
        s.insert(i*3);
    }
    cout<<"Tamanho do conjunto: "<<s.size()<<std::endl;
}