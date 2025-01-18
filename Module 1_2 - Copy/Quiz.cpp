#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[4] = {12 , 13 , 14 , 15};
    vector<int> v(a, a+4);
    for(int i = 0 ; i<v.size(); i++) {
        cout << v[i] <<" ";
    }
    return 0;
}