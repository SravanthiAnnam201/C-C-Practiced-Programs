//unique elements no order--unordered-set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_multiset(unordered_set<int> us)
{
    unordered_set<int>::iterator it;
    for(it=us.begin();it!=us.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    unordered_set<int>us{1,2,5,5,6,6,3,3,8,8,8,4,4,4};
    print_multiset(us);

    for(int i=0;i<=10;i++)
    {
        us.insert(i);
    }
    print_multiset(us);
    us.insert(45);
    print_multiset(us);
    cout<<"count(5): "<<us.count(5)<<endl;
    cout<<"count(3): "<<us.count(3)<<endl;
    cout<<"count(2): "<<us.count(2)<<endl;
    cout<<"count(8): "<<us.count(8)<<endl;
    cout<<"count(7): "<<us.count(7)<<endl;
    us.erase(us.find(8));
    print_multiset(us);
    us.erase(us.find(3));
    print_multiset(us);
    return 0;
}