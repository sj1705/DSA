#include <iostream>
using namespace std;

void print(int *ptr)
{
    cout <<  "Value:   "  << *ptr << endl;
    cout << "Address : "<< ptr << endl;
}

int main()
{
    int a =5;
    int *ptr=&a;
    print(ptr);
    return 0;
}