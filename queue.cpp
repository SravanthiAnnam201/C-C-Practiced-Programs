#include<iostream>
#include<bits/stdc++.h>
#include<queue>

using namespace std;

void print_queue(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<"-";
        q.pop();
    }
    cout<<endl;
}





int main()
{
    queue<int> q;
     for(int i =0;i<=10;i++)
     {
         q.push(i);
     }
     cout<<q.size()<<endl;
     print_queue(q);
}