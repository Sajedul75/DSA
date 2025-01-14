#include<bits/stdc++.h>
using namespace std;


class mystack
{
    public:
        list<int> l;
        void push(int val)
        {
            l.push_back(val);
        }


        void pop()
        {
            l.pop_back();

        }
        int top()
        {
            return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            return l.empty();
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