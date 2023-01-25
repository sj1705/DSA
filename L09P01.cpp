#include <iostream>
using namespace std;
int main (){
    int n,s=0;
    cin >> n;
    int arr[n];
    for(int i =0;i <n;i++){
        cin >>arr[i];
        s=s+arr[i];
    }
    cout << s;
}