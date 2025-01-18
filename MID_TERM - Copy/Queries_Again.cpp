#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int val) : value(val), next(NULL), prev(NULL) {}
};

class Dbl_Linked_List
{
public:
    Node* head;
    Node* tail;
    int size;

    Dbl_Linked_List () : head(NULL), tail(NULL), size(0) {}

    string insert_at_index(int index, int value)
    {
        if (index < 0 || index > size)
        {
            return "Invalid";
        }

        Node* new_node = new Node(value);

        if (index == 0)
        {
            if (head == NULL)
            {
                head = new_node;
                tail = new_node;
            }
            else
            {
                new_node->next = head;
                head->prev = new_node;
                head = new_node;
            }
        }
        else if (index == size)
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        else
        {
            Node* current = head;
            for (int i = 0; i < index - 1; ++i)
            {
                current = current->next;
            }
            new_node->next = current->next;
            new_node->prev = current;
            current->next->prev = new_node;
            current->next = new_node;
        }

        ++size;
        return "";
    }

    string print_f()
    {
        string result = "L -> ";
        Node* current = head;
        while (current != NULL)
        {
            result += to_string(current->value) + " ";
            current = current->next;
        }
        return result;
    }

    string print_b()
    {
        string result = "R -> ";
        Node* current = tail;
        while (current != NULL)
        {
            result += to_string(current->value) + " ";
            current = current->prev;
        }
        return result;
    }
};

void Prcs_Queries(int q, int Queries[][2])
{
    Dbl_Linked_List dll;
    for (int i = 0; i < q; ++i)
    {
        int x = Queries[i][0];
        int v = Queries[i][1];
        string result = dll.insert_at_index(x, v);
        if (result == "Invalid")
        {
            cout << result << endl;
        }
        else
        {
            cout << dll.print_f() << endl;
            cout << dll.print_b() << endl;
        }
    }
}

int main()
{
    int q;
    cin >> q;
    int Queries[q][2];


    for (int i = 0; i < q; ++i)
    {
        cin >> Queries[i][0] >> Queries[i][1];
    }

    Prcs_Queries(q, Queries);

    return 0;
}