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

void rec(int i , int n)
{
    if(i > n)
    {
        return;
    }

    rec(i+1 , n);
    cout << i <<endl;
}




int main()
{
    int n = 5;
    rec(1,n);
    
    return 0;
}