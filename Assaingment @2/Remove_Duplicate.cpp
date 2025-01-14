#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int val;
    Node* next;
    Node(int val) 
    {
        this-> val = val;
        this-> next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail-> next = newNode;
    tail = newNode;
}

void print_linked_list(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp-> val << " ";
        temp = temp-> next;
    }
    cout <<endl;
}

void remove_duplicates(Node* head) 
{
    Node* A = head;

    while (A != NULL) 
    {
        Node* B = A;
        while (B -> next != NULL) 
        {
            if (B-> next -> val == A-> val) 
            {
                Node* delete_node = B-> next;
                B -> next = B -> next-> next;
                delete delete_node;
            } 
            else 
            {
                B = B -> next;
            }
        }
        A = A-> next;
    }
}

int main() 
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (true) 
    {
        cin >> val;
        if (val == -1)
        break;
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}