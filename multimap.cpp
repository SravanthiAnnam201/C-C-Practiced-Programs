//multimaps--multiple and no order keys

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_unmap(multimap<int,int> mmp)
{
    multimap<int,int>::iterator it;
    cout<<"Map elements are: ";
    for(it=mmp.begin();it!=mmp.end();it++)
    {
        cout<<(*it).first<<"--"<<(*it).second<<" ";
    }
    cout<<endl;
    
}
int main()
{
    multimap<int,int> mmp{{1,9},{2,8},{3,7},{3,6},{4,5},{5,4},{6,3},{7,2},{8,1},{9,0}};
    print_unmap(mmp);
    cout<<"Size of multimap: "<<mmp.size()<<endl;//prints the size of map
    for(int i=11;i<20;i++)
    {
        mmp.insert({i,i+10});
    }
    print_unmap(mmp);
    cout<<"Size of multimap: "<<mmp.size()<<endl;
    
    return 0;

}