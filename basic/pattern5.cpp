#include <iostream>
using namespace std;

int main(){
    int n=5;
    cout << " "<< endl;
    cout << " "<< endl;
    cout << " "<< endl;
    cout << " "<< endl;
    cout << " "<< endl;
for(int i =1; i<=n;i++){
    if(i%2==0){
    for(int k=i;k<=13;k++){
        cout << " ";
    }    
    }
    else{     
    for(int k=n;k>i;k--){
        cout << " ";
    }
    for(int j =1;j<=i;j++){
        if(j%2==0)
            cout << " ";
        else    
            cout << "*";
    }
    for(int j =2;j<=i;j++){
        if(j%2==0)
            cout << " ";
        else    
            cout << "*";
    }
    for(int k=n;k>i;k--){
        cout << " ";
    }
    for(int k=n;k>i+1;k--){
        cout << " ";
    }
    for(int j =1;j<=i;j++){
        if(j%2==0)
            cout << " ";
        else    
            cout << "*";
    }
    for(int j =2;j<=i;j++){
        if(j%2==0)
            cout << " ";
        else    
            cout << "*";
    }
    }
    cout <<endl;
}
    cout << " "<< endl;
    cout << " "<< endl;
    cout << " "<< endl;
    cout << " "<< endl;
    cout << " "<< endl;
  

}