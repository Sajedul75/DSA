#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this ->val = val;
        this ->next = NULL;
    
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void Print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val <<endl;

        temp = temp->next;
    }
    
}
int main()
{
    Node* head  = new Node(10);

    Node* a = new Node(10);
    Node* b  = new Node(20);
    Node* tail= new Node(340);


    head->next =a;
    a->next = tail;

    insert_at_tail(head , tail , 40);
    Print_linked_list(head);


    cout << "Tail =" << tail->val <<endl;
    
    
    return 0;
}