#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {2,5,6,7,3,5,5};
    // cout<< "Address of first block of array is  :    " << arr << endl;
    // cout<< "Address of first block of array is  :    " << &arr[0] << endl;
    // int a =5;
    // int *ptr=&a;
    // cout << *ptr << endl;
    // cout << *arr << endl;
    // cout << *(arr+1) << endl;
    // cout << a[arr] << endl;
    // cout << "hehe git check"<< endl;

    int a[20]={2,4,6,8};
    cout << "1st:   " << &a[0] << endl; 
    cout << "2st:   " << &a << endl; 
    cout << "3st:   " << a << endl; 
    cout << endl;
    int *p=&a[0];
    cout << "4st:   " << *p << endl; 
    cout << "5st:   " << p << endl; 
    cout << "6st:   " << &p << endl; 
    p=p+1;
    cout << endl;
    cout << "4st:   " << *p << endl; 

    return 0;
}