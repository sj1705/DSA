#include <iostream>
using namespace std;

class A {
public:
    void methodA() {
        cout << "Method of Class A" ;
    }
};

class B : public A {
public:
    void methodB() {
        cout << "Method of Class B" ;
    }
};

int main() {
    B* obj = new B(); // Correct: A pointer can point to an A object
    obj->methodB(); // Correct way to call methodA on the object pointed by obj

}
















































































