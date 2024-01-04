//multiple elements no order--unordered-multisets
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print_multiset(unordered_multiset<int> ums)
{
    unordered_multiset<int>::iterator it;
    for (it = ums.begin(); it != ums.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    unordered_multiset<int>ums{ 1,2,5,5,6,6,3,3,8,8,8,4,4,4 };
    print_multiset(ums);

    for (int i = 0; i <= 10; i++)
    {
        ums.insert(i);
    }
    print_multiset(ums);
    ums.insert(45);
    print_multiset(ums);
    cout << "count(5): " << ums.count(5) << endl;
    cout << "count(3): " << ums.count(3) << endl;
    cout << "count(2): " << ums.count(2) << endl;
    cout << "count(8): " << ums.count(8) << endl;
    cout << "count(7): " << ums.count(7) << endl;
    ums.erase(ums.find(8));
    print_multiset(ums);
    ums.erase(ums.find(3));
    print_multiset(ums);
    return 0;
}