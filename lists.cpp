//////////lists//////////////

#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;
void print_list(list<int> l)
{
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}




int main()
{
    list<int> l{1,2,3,4,5};
    print_list(l);
    int ch,e;
    do{
        cout<<"Enter the choice \n 1.Appending the element \n 2. pop out the last element \n 3.Find the size of list \n 4.print the first element \n 5.print the last element\n 6.Check if the list is empty\n 7.Insert the element at the start \n 8. Insert the element at the end\n 9. Erase the first element \n 10. Erase the range of elements from start\n 11.clear the list \n 0. To exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the element to be added"<<endl;
                cin>>e;
                l.push_back(e);
                print_list(l);
                break;
            case 2:
                l.pop_back();
                print_list(l);
                break;
            case 3: 
                cout<<l.size()<<endl;
                break;
            case 4:
                cout<<l.front()<<endl;
                break;
            case 5:
                cout<<l.back()<<endl;
                break;
            case 6:cout<<l.empty()<<endl;
                break;
            case 7: 
                cout<< "Enter the element"<<endl;
                cin>>e;
                l.insert(l.begin(),e);
                print_list(l);
                break;
            case 8:
                cout<<"Enter the element to be added"<<endl;
                cin>>e;
                l.insert(l.end(),e);
                print_list(l);
                break;

            case 9: 
                l.pop_front();
                print_list(l);
                break;
            case 10:
            {
                list<int>::iterator it=l.begin();
                int r;
                cout<<"Enter the number of elements to be removed from beginning:"<<endl;
                cin>>r;
                cout<<*it<<endl;
                advance(it,r);
                cout<<*it<<endl;
                l.erase(l.begin(),it);
                print_list(l);
            }
                break;
            case 11: 
                l.clear();
                cout<<"No elements in the list:"<<endl;
                break;
            default:
                cout<<"Enter your choice between 0 and 11 "<<endl;
                break;
        }   
    }while(ch!=0);
    
    
    if(ch==0) print_list(l);


    
    return 0;
    
}