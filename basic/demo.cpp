class A {
public:
    void method() {
        cout << "Method of Class A" << endl;
    }
};

class B : public A {
public:
    void methodB() {
        cout << "Method of Class B" << endl;
    }
};

int main() {
    // This is not allowed and will result in a compile-time error
    A obj = new B();
    
    // If it were allowed, what would happen when we call a method that only exists in B?
    obj.methodB(); // This method does not exist on an A object!
}
