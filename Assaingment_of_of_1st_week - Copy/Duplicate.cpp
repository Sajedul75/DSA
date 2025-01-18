#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort (a.begin(),a.end());
    bool Dupli = false;
    for (int i = 1 ; i <n ;i++)
    {
        if (a[i] == a[i -1])
        {
            Dupli = true;
            break;
        }
    }
    if (Dupli)
    {
        cout << "YES" <<endl;

    }
    else
    {
        cout << "NO";
    }
    return 0;
}