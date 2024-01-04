//maps--unique and ascending order keys

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_map(map<int,int> mp)
{
    map<int,int>::iterator it;
    cout<<"Map elements are: ";
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<(*it).first<<"--"<<(*it).second<<" ";
    }
    cout<<endl;
    
}
int main()
{
    map<int,int> mp{{1,9},{2,8},{3,7},{3,6},{4,5},{5,4},{6,3},{7,2},{8,1},{9,0}};//the unique key takes the first found unique value
    print_map(mp);
    cout<<"Size of map: "<<mp.size()<<endl;//prints the size of map
    mp[10]=45;//adding new pair to map
    print_map(mp);
    mp[5]=65;//changing the value of key
    print_map(mp);
    cout<<"Size of map: "<<mp.size()<<endl;
    for(int i=11;i<20;i++)
    {
        mp.insert({i,i+10});
    }
    print_map(mp);
    cout<<"Size of map: "<<mp.size()<<endl;
    
    return 0;

}