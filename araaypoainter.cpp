#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,5,6,7,3,5,5};
    cout<< "Address of first block of array is  :    " << arr << endl;
    cout<< "Address of first block of array is  :    " << &arr[0] << endl;
    int a =5;
    int *ptr=&a;
    cout << *ptr << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << a[arr] << endl;
    cout << "hehe git check"<< endl;
    return 0;
}