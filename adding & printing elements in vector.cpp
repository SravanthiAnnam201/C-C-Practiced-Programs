
#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World";
    vector <int> v;
    cout<<"\nSize of the vector: "<< v.size()<<endl;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);

    }
    cout<<"\nSize of the vector: "<< v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    


    return 0;
}