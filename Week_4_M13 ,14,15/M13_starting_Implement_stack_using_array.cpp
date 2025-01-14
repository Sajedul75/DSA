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
    st.push(10);
    st.push(20);
    st.push(30);


    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;


    st.pop();

    if(!st.empty())

    cout << st.top() << endl;

    if(!st.empty())

    st.pop();




    return 0;
}