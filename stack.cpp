#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

void print_stack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<"-";
        s.pop();
        
    }
    cout<<endl;
}


int main()
{
    stack<int> s;
    for(int i=0;i<=5;i++)
    {
        s.push(i);
    }
    print_stack(s);
    return 0;
}