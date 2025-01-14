#include<bits/stdc++.h>
using namespace std;


class mystack
{
    public:
        vector<int> V;
        void push(int val)
        {
            V.push_back(val);
        }


        void pop()
        {
            V.pop_back();

        }
        int top()
        {
            return V.back();
        }
        int size()
        {
            return V.size();
        }
        bool empty()
        {
            return V.empty();
        }
};

int main()
{
    mystack st;
    int n;
    cin >> n;
    for (int i = 0 ; i< n; i++)
    {
        int X;
        cin >> X;
        st.push(X);
    }

    while(! st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}