#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t;
    cin >> n;
    long long arr[n];
    for (int i = 0 ; i<n; i++)
    {
        cin >>arr[i];
    }
    long long int pre[n];
    pre[0] = arr[0];
    for (int i = 1 ; i<n;i++)
    {
        pre[i] = arr[i] +pre[i -1];
    }
    reverse(pre , pre+n);
    for(int i = 0 ; i<n ;i++)
    {
        cout << pre[i] << " ";
    }
    cout <<endl;
    return 0;
}