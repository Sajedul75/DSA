#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> My_list;
    int val;

    while(cin >> val && val != -1 )
    {
        My_list.push_back(val);
    }

    My_list.sort();
    My_list.unique();


    for(int val :My_list)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}