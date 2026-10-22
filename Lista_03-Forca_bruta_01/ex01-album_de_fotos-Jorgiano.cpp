#include <iostream>

using namespace std;

int main(){
    int x,y,l1,h1,l2,h2;
    cin>>x>>y>>l1>>h1>>l2>>h2;

    if {((h1+h2<=y and l1<=x and l2<=x) or
        (l1+h2<=y and h1<=x and l2<=x) or
        (l1+l2<=y and h1<=x and h2<=x) or
        (h1+h2<=y and l1<=x and l2<=x) or
        (h1+h2<=x and l1<=x and l2<=y) or
        (l1+h2<=x and h1<=x and l2<=y) or
        (l1+l2<=x and h1<=x and h2<=y) or
        (h1+h2<=x and l1<=x and l2<=y))
        
        cout<<"S\n";
    } else {
        cout<<"N\n"
    }
}
