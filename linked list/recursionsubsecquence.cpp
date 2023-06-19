#include <bits/stdc++.h>
using namespace std;
void printF(int index,vector <int> &ds, int arr[],int n){
    if(index==n){
        for(auto i: ds){
            cout << i << " ";
        }
        cout << endl; 
        return; 
    }
    ds.push_back(arr[index]);
    printF(index+1,ds,arr,n);
    ds.pop_back();
    printF(index+1,ds,arr,n);
}
int main(){
    int arr []={3,2,1};
    int n=3,i=0;
    vector <int> ds;
    printF(i,ds,arr,n);
}