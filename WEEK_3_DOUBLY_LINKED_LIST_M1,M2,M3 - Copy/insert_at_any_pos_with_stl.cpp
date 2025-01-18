#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = { 10 , 20 , 30};

    list<int> l2 = { 100 , 200};
    vector<int> v = { 2, 3 ,4 }; 


    l.insert(next(l.begin() , 2 ) ,v.begin() , v.end());

    
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}