#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int x) : val(x) , next(NULL) , prev(NULL) {}

};


void insert(Node* &head , Node* &tail , int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = tail = newNode;
    }

    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

class palin
{
    public:
    bool isPalindrome(Node* head)
    {
        if(head == NULL || head->next == NULL)
        {
            return true;
        }

        Node* left = head;
        Node* right = head;

        while(right->next != NULL)
        {
            right = right->next;
        }

        while(left != right && left->prev != right)
        {
            if(left->val != right->val)
            {
                return false;
            }
            left = left->next;
            right = right->prev;
        }

        return true;

    }
};


void printList(Node* head)
{
    Node* crent = head;
    while(crent != NULL)
    {
        cout << crent->val << " ";
        crent = crent->next;
    }
    cout << endl;
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    

    int val;
    while(cin >> val && val != -1)
    {
        insert(head , tail , val);
    }

    palin S;
    bool palindrome = S.isPalindrome(head);

    if(palindrome)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    return 0;
}