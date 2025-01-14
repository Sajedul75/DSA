#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this ->val = val;
        this ->next = NULL;
        this->prev = NULL;
    
    }
};

void print_forward(Node* head)
{ 
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_At_tail(Node* &head , Node* &tail)
{
    Node* deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    

    head->next = a;
    a-> prev = head;

    a-> next = tail;
    tail-> prev = a;
    

    delete_At_tail(head , tail);
    print_forward(head);

    return 0;
}