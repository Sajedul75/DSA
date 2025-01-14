#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10 , 20 , 30 ,40 , 20};
    auto it = find(l.begin() , l.end(),20);
    if(it == l.end())
    {
        cout << " NOT FOUND " << endl;
    }
    else
    {
        cout << " FOUND " << endl;
    }
    return 0;
}