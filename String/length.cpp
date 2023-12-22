#include <iostream>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    int i;
    for(i=0;'\0'!=name[i];i++){}
    cout << "length of name is:" << i<<endl;
    cout << name;

}