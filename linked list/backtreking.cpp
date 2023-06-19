#include <iostream>
using namespace std;

void f(int i, int n){
    if(i<1)
        return ;
    n++;    
    f(i-1,n);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;
    f(n,0);
    return 0;
}