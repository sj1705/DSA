#include <iostream>
using namespace std;

int main()
{
    int num =5;
    cout << num << endl;
    // address of operator<<
    cout << "This is Address of num:  "<< &num << endl;


    // crearting pointer
    int *p =&num;
    cout << *p <<endl; // value at address of num
    cout << p <<endl; // addrress of num

    cout << "size of interger is :  " << sizeof(num) << endl;
    cout << "size of pointer of int is :  " << sizeof(p) << endl;    


    int *p2 = 0;
    cout << "risky practice :   " << *p2 << endl;
}