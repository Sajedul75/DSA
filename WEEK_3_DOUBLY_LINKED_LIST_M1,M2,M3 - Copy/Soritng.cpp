#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = { 20 ,20 ,30 ,40 ,50 ,40 ,30 };

    l.sort(greater<int> ());
    
    l.unique();
    
    for (int val : l)
    {
        cout << val << endl;

    }
    return 0;
}