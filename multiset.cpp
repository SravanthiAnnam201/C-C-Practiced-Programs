//multiple elements ascending order--multisets
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_multiset(multiset<int> ms)
{
    multiset<int>::iterator it;
    for(it=ms.begin();it!=ms.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    multiset<int>ms{1,2,5,5,6,6,3,3,8,8,8,4,4,4};
    print_multiset(ms);

    for(int i=0;i<=10;i++)
    {
        ms.insert(i);
    }
    print_multiset(ms);
    ms.insert(45);
    print_multiset(ms);
    cout<<"ms.count(5): "<<ms.count(5)<<endl;
    cout<<"ms.count(3): "<<ms.count(3)<<endl;
    cout<<"ms.count(2): "<<ms.count(2)<<endl;
    cout<<"ms.count(8): "<<ms.count(8)<<endl;
    cout<<"ms.count(7): "<<ms.count(7)<<endl;
    ms.erase(ms.find(8));
    print_multiset(ms);
    ms.erase(ms.find(3));
    print_multiset(ms);






    
    
    return 0;
}