#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i< n ; i++)
    {
        cin >> a[i];
    }
    for (int i = 0 ; i< n ; i++)
    {
        for (int i = 0 ; i< n ; i++)
        {
            for (int j = i+1 ; j< n ; i++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);

                }
            }
        }
        for (int i = 0 ; i< n ; i++)
        {
            cout << a[i] << " " <<endl;
        }

    }
    return 0;
}