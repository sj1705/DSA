#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top == size - 1)
            cout << "Stack Overflow\n";
        else
        {
            top++;
            arr[top] = element;
        }
    }

    void pop()
    {
        if (top > -1)
            top--;
        else
            cout << "Stack Underflow\n";
    }

    void peek()
    {
        if (top > -1)
            cout << arr[top] << endl;
        else
            cout << "No element in the stack\n";
    }

    bool empty()
    {
        return (top == -1);
    }
};

int main(){

    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.pop();
    stack.peek();
    
}
