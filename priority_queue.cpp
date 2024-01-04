#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    priority_queue<int> pq;
    for(int i=0;i<10;i++)
    {
        pq.push(i);
    }
    cout<<pq.size();
    cout<<endl;
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<pq.size();
    

}