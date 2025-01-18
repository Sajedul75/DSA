#include <bits/stdc++.h>
using namespace std;

bool S_ame(stack <int> &s, queue <int> &q) 

{
    if(s.size() != q.size()) 
    {
        return false;
    }

    while(!s.empty() && !q.empty()) 

    {
        if(s.top() != q.front()) 
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

   stack<int> s;
   queue<int> q;

   vector<int> S_val(n);

   for(int i = 0; i < n; ++i) 
   {
        cin >> S_val[i];
   }

    vector<int> Q_val(m);

    for(int i = 0; i < m; ++i)

    {
        cin >> Q_val[i];
    }

    for(int i = 0; i < n; ++i) 

    {
        s.push(S_val[i]);
    }

    for(int i = 0; i < m; ++i) 

    {
        q.push(Q_val[i]);
    }

    if(S_ame(s, q)) 

        cout << "YES" << endl;

    else

        cout << "NO" << endl;
    
    return 0;
}