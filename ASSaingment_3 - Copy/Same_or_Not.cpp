#include <bits/stdc++.h>
using namespace std;

class myStack 
{
public:

    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }
    bool empty()

    {
        if (v.size() == 0)
            return true;

        else
            return false;

    }
};

class myQueue 

{
public:

    list<int> v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_front();
    }
    int front()
    {
        return v.front();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};

bool S_ame(myStack& s, myQueue& q) 

{
    if (s.size() != q.size()) 
    {
        return false;
    }

    while (!s.empty() && !q.empty()) 

    {
        if (s.top() != q.front())
        {
            return false;
        }
        s.pop();
        q.pop();
        
    }

    return true;
}

int main() 
{
    int n, m;
    cin >> n >> m;

    myStack s;
    myQueue q;

    vector<int> S_val(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> S_val[i];
    }

    vector<int> Q_val(m);
    for (int i = 0; i < m; ++i) 
    {
        cin >> Q_val[i];
    }

    for (int i = 0; i < n; ++i) 
    {
        s.push(S_val[i]);
    }

    for (int i = 0; i < m; ++i) 
    {
        q.push(Q_val[i]);
    }

    if (S_ame(s, q)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}