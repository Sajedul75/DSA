#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    queue<string> T;

    while (q--) 
    {
        int tp;
        cin >> tp;

        if (tp == 0) 
        {
            string N;
            cin >> N;
            T.push(N);
        } 
        else if (tp == 1)
        {
            if (!T.empty()) 
            {
                cout << T.front() << endl;
                T.pop();
            } 
            else 
            {
                cout << "Invalid" << endl; 
            }
        }
    }

    return 0;
}