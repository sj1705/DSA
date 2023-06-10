#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int element) {
        Node* newNode = new Node(element);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "No element in the stack\n";
            return -1;  // or throw an exception
        }
        return top->data;
    }

    bool isEmpty() {
        return (top == nullptr);
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element: " << stack.peek() << std::endl;
    stack.pop();

    std::cout << "Top element after pop: " << stack.peek() << std::endl;

    std::cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
