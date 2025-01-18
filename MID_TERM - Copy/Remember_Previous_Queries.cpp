#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> MYlist;
    int q;
    cin >> q;
    while(q--)
    {
        int X , V;
        cin >> X >> V;
        if (X == 0)
        {
            MYlist.push_front(V);
        }
        else if(X == 1)
        {
            MYlist.push_back(V);
        }
        else if(X == 2)
        {
            if(V >= 0 && V < MYlist.size())
            {
                auto it = MYlist.begin();
                for (int i = 0 ; i<V ; ++i)
                {
                    ++it;
                }
                MYlist.erase(it);
            }
        }

    cout << "L -> ";
    for (int val : MYlist)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> MYlist_reversed(MYlist);
    MYlist_reversed.reverse();

    cout << "R -> ";
    for (int val : MYlist_reversed)
    {
        cout << val << " "; 
    }
    cout << endl;

    }
    return 0;
}