#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list<int>l(10);         //1


    //list<int>l(10 , 2);      //1,2


    //cout << *l.begin() << endl;     //1


    //for(auto it = l.begin(); it != l.end() ;  it++)   //2


    //{
      //  cout << *it << endl;//2
    //}


    //for (int val : l)         //2


    //{


       // cout << val << endl;  //2



    //}



    //list<int> l = {1 , 2 ,3 ,4 , 5};  // 3


    //list<int> l2 = (l); // 3


    //int a[] = {10 , 20 , 30};


    vector<int> v = { 10 , 20 , 30};


    vector<int> l2(v.begin() , v.end()); 


    //list<int > l2(a , a+3);


    for (int val : l2)   // 3
    
    {
        cout << val << endl; //3

    }

    return 0;
}