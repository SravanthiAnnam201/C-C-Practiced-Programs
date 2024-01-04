
#include <iostream>
#include <bits/stdc++.h>
#include<deque>

using namespace std;

void print_deque(deque<int> d)//printing elements using index
{
    cout<<"Elements are: ";
    for(int i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
}
void print_it_deque(deque<int> d)//printing elements using iterators
{
    deque<int>::iterator it;
    for(it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<"-";
    }
        cout<<endl;
}
int main()
{
    deque<int> d{1,2,3,4,5};
    cout<<d.size()<<endl;//printing the size of deque
    for(int i=0;i<10;i++)
    {
        d.push_back(i);//adding elements at the end of deque 
    }
    cout<<d.size()<<endl;
    print_deque(d);
    print_it_deque(d);
    d.push_back(45);//printing element at the end
    d.push_front(54);//printing elements at the beginning
    print_deque(d);
    cout<<d.front()<<endl;//prints the first element
    cout<<d.back()<<endl;//prints the last element
    cout<<*d.begin()<<endl;//prints the value in the first iterator
    cout<<*d.end()<<endl;//prints the value in the last iterator
    cout<<*(d.end()-1)<<endl;//prints the value in the last but one iterator
    d.pop_front();//pops out the first element in deque
    d.pop_back();//pops out the last element of the deque
    print_deque(d);
    d.insert(d.begin(),44);//inserting 44 at the start of the deque
    d.insert(d.end(),55);//inserting 55 at the end of the deque
    print_deque(d);
    d.insert(d.begin()+6,65);//inserting 65 at 6 positions ahead of the initial iterator of deque
    print_deque(d);
    d.insert(d.end()-2,22);//inserting 22 at 2 positions before the last iterator;
    print_deque(d);
    d.erase(d.begin());//deletes the first element
    print_deque(d);
    d.erase(d.end());//deletes the last element
    print_deque(d);
    d.erase(d.begin()+3);//deletes element from third position ahead of first ieterator
    print_deque(d);
    d.erase(d.end()-4);//delets element from fourth position before the last iterator
    print_deque(d);
    d.clear();//clears the deque
    print_deque(d);


    
    

    return 0;
}