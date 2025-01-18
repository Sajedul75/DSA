#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string website;
        Node* next;
        Node* prev;

    Node(string site)
    {
        website = site;
        next = 0;
        prev = 0;
    
    }
};

class Dbly_linked
{
    public:
    Node* head;
    Node* current;

    Dbly_linked()
    {
        head = 0;
        current = 0;
    }
    void add_web(string& site)
    {
        Node* newNode = new Node(site);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        current = head;
    }
    void visit(string   &site)
    {
        Node* temp = head;
        while(temp)
        {
            if (temp->website == site)
            {
                current = temp;
                cout << current->website << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Not Available" <<endl;
    }

    void next()
    {
        if(current && current->next)
        {
            current = current->next;
            cout << current->website << endl;
        }
        else
        {
            cout << "Not Available" <<endl;
        }
    }
    void prev()
    {
        if(current && current->prev)
        {
            current = current->prev;
            cout << current->website << endl;
        }
        else
        {
            cout << "Not Available" <<endl;
        }
    }
};

int main()
{
    Dbly_linked history;
    vector<string> adrs;
    string adress;
    
    while(cin >> adress)
    {
        if(adress == "end")
        break;
        adrs.push_back(adress);
    }

    for(int i = adrs.size() -1 ; i>= 0 ; --i)
    {
        history.add_web(adrs[i]);
    }

    int q;
    cin >>q;
    cin.ignore();


    for (int i = 0 ; i<q ; ++i)
    {
        string query;
        getline(cin , query);
        stringstream ss(query);
        string command , site;
        ss >> command;

        if (command == "visit")
        {
            ss >> site;
            history.visit(site);
        }
        else if(command == "next")
        {
            history.next();
        }
        else if(command == "prev")
        {
            history.prev();
        }
    }

    return 0;
}