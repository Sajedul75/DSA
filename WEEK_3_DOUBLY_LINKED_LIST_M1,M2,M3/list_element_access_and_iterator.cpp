#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10 , 20 , 30 , 50};

    
    cout << l.back() << endl;
    cout << l.front() << endl;


    cout << *next(l.begin(),2) << endl;
    return 0;
}