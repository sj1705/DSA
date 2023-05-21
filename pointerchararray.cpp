#include <iostream>
using namespace std;

int main()
{
    char arr[20]="abcde";
    char ch = 't';
    char ch1 = 'r';
    char *ptr=&arr[0];
    cout << "1st :  " << &ptr << endl;
    cout << "2st :  " << ptr << endl;
    cout << "3st :  " << *ptr << endl;
    cout << "4st :  " << arr << endl;
}