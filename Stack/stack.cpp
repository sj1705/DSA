#include <iostream>
#include <stack>
using namespace std;
int main()
{
    cout << "stacks practice" << endl;
    //creation
    stack <int> s;
    //push
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(2);
    s.pop();

cout << s.top() << endl;    
cout << s.empty() << endl;
cout << "The size of the stack is ::  " << s.size() << endl;
}