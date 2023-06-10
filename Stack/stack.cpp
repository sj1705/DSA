#include <iostream>
#include <stack>
using namespace std;
int main()
{
    cout << "stacks practice" << endl;
    stack <int> s;
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);

cout << s.top() << endl;    
cout << s.empty() << endl;
cout << "The size of the stack is ::  " << s.size() << endl;
}