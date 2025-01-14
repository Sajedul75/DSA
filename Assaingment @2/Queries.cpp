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

void insert_at_head(Node* &head, int v) 
{
    Node* newNode = new Node(v);
    newNode -> next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, int v) 
{
    Node* newNode = new Node(v);
    if (head == NULL) 
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp -> next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete_at_Index(Node* &head, int idx) 
{
    if (head == NULL)
        return;

    if (idx == 0) 
    {
        Node* temp = head;
        head = head-> next;
        delete temp;
        return;
    }

    Node* A = NULL;
    Node* B = head;
    int count = 0;

    while (B != NULL && count < idx) 
    {
        A = B;
        B = B -> next;
        count++;
    }

    if (B == NULL) 
    {
        return;
    }

    A-> next = B -> next;
    delete B ;
}

void print_Linked_List(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp-> val << " ";
        temp = temp-> next;
    }
    cout <<endl;
}

int main() 
{
    Node* head = NULL;
    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) 
    {
        int x, v;
        cin >> x >> v;

        if (x == 0) 
        {
            insert_at_head(head, v);
        } 
        else if (x == 1) 
        {
            insert_at_tail(head, v);
        } 
        else if (x == 2) 
        {
            delete_at_Index(head, v);
        }

        print_Linked_List(head);
    }

    return 0;
}