#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cout << "queue practice in this folder stl ";


    queue <int> q;
    q.push(11);
    q.push(15);
    q.push(13);
    cout << "front of queue : " << q.front() << endl;

    cout << "size of queue is : " << q.size() << endl;
    q.pop();
    cout << "size of queue is : " << q.size() << endl;
    cout << q.empty() << endl << endl;
    cout << "front of queue : " << q.front() << endl;
}