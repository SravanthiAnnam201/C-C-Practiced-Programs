//unordered-maps--unique and no order keys

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_unmap(unordered_map<int,int> ump)
{
    unordered_map<int,int>::iterator it;
    cout<<"Map elements are: ";
    for(it=ump.begin();it!=ump.end();it++)
    {
        cout<<(*it).first<<"--"<<(*it).second<<" ";
    }
    cout<<endl;
    
}
int main()
{
    unordered_map<int,int> ump{{1,9},{2,8},{3,7},{3,6},{4,5},{5,4},{6,3},{7,2},{8,1},{9,0}};//the unique key takes the first found unique value
    print_unmap(ump);
    cout<<"Size of unordered_map: "<<ump.size()<<endl;//prints the size of map
    ump[10]=45;//adding new pair to unordered_map
    print_unmap(ump);
    ump[5]=65;//changing the value of key
    print_unmap(ump);
    cout<<"Size of unordered_map: "<<ump.size()<<endl;
    for(int i=11;i<20;i++)
    {
        ump.insert({i,i+10});
    }
    print_unmap(ump);
    cout<<"Size of unordered_map: "<<ump.size()<<endl;
    
    return 0;

}