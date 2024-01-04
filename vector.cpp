

//////////printing vector elements using iterators in  function//////////////

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print_vector(vector <int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector <int> v{ 1,2,3,4,5 };
    print_vector(v);
    cout << v.front() << endl;// prints the first element
    cout << v.back() << endl;//prints the last element
    cout << *v.begin() << endl;//prints the value in first pointer
    cout << *v.end() << endl;//prints the value in last pointer,which is a null pointer
    cout << *(v.end() - 1) << endl;//prints the value in last but one pointer
    cout << v.empty() << endl;//checks the vector is empty or not "1" for empty "0" for not
    v.pop_back(); //removes the last element of the vector
    print_vector(v);
    v.insert(v.begin(), 6);//inserts element at the start
    print_vector(v);
    v.insert(v.begin() + 4, 5);//inserts element in begin + fourth position
    v.insert(v.begin() + 4, 5, 7);//inserts element in begin + fourth position for five times
    v.erase(v.begin());//removes the first element using iterator
    print_vector(v);
    sort(v.begin(),v.end());//sorts the elements in the vector
    cout<<"38 line"<<endl;
    print_vector(v);
    v.erase(v.begin(), v.begin() + 3);//removes elements in the range from start to three positions

    print_vector(v);
    v.clear();
    print_vector(v);//clears the complete vector
    cout << "elements are cleared" << endl;

    return 0;

}



