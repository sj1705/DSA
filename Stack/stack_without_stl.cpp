#include <iostream>
using namespace std;


class stack
{
    public:
    int *arr;
    int size;
    int top;

    stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }


    void push(int element)
    {
        if(top == size)
            cout << "stack Overflow";
        else{
            top++;
            arr[top]=element;
        }
    }
    void pop
    void top
    void size
}