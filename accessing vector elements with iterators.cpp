//////////printing vector elements using iterators in  function//////////////

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print_vector(vector <int> v)
{
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> v{1,2,3,4,5};
    print_vector(v);
    
    return 0;
    
}