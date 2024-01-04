//sets-unique and ascending ordered
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_set(set<int> s)
{
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int> s{5,4,3,2,1};
    print_set(s);
    cout<<s.size()<<endl;
    for(int i=0;i<10;i++)
    {
        s.insert(i);
    }
    cout<<s.size()<<endl;

    print_set(s);
    cout<<s.count(5)<<endl;
    s.erase(s.find(5));
    print_set(s);
    s.erase(3);
    print_set(s);


    
    return 0;

}