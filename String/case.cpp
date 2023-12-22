#include <iostream>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    int i;
    for(i=0;'\0'!=name[i];i++){
        name[i]=name[i]+32;
    }
    cout << "length of name is:" << i<<endl;
    cout << name;
}