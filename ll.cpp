#include <iostream>
using namespace std;



struct Node
{
    int data;
    Node *next;
};

void print(Node *head)
{
    Node *ptr=head;
    while(ptr!=NULL)
    {
        cout << ptr->data << "  ";
        ptr=ptr->next;
    }
}

void makell(Node *head, int size)
{
    for(i=1;i<size;i++)
    {
        Node *link=new Node;
        int
    }
}

int main()
{
    Node *head = new Node();
    // Node *second = new Node();
    // Node *third = new Node();
    
    // head->data=5;
    // head->next=second;

    // second->data=4;
    // second->next=third;

    // third->data=3;
    // third->next=NULL;

    print(head);
    int n;
    cout << "Enter the size of ll";
    cin >> n;
    makell(head,n);
    return 0;
}

