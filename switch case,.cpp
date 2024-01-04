// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    char ch;
    cout<<"Enter the values of a and b:";
    cin>>a>>b;
    cout<<"Enter your choice 1 for addition 2 for subtraction 3 for division";
    cin>>ch;
    switch(ch)
    {
        case '1': cout<<a+b<<endl;
                break;
        case '2': cout<<a-b<<endl;
                break;
        case '3': cout<<a/b<<endl;
                break;
        
        
    }

    return 0;
}