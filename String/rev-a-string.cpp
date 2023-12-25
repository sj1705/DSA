#include <iostream>
using namespace std;
int main()
{
    string name,revname;
    getline(cin, name);
    int i;
    int l=name.length();
    revname.resize(l);

    for(i=0;i<l/2;i++){
        revname[l-i-1]=name[i];
        
    }
    cout << revname;

}