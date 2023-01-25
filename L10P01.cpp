#include <iostream>
using namespace std;
int revalternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<"    ";
    }
}
int main(){
    int arr[6]={2,3,2,3,2,3};
    revalternate(arr,6);
    printarray(arr,6);
}
