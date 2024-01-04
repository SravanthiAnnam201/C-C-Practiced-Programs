
#include <iostream>
using namespace std;

class test
{   public:

    int number=10;
    string name="Sravanthi";
    

    
};
class derivedTest:public test
{
    public:
    
    string country="India";
    
};



int main()
{   derivedTest T1;
    cout<<"Derived class content"<<endl;
    cout<<T1.number<<endl;
    cout<<T1.name<<endl;
    cout<<T1.country<<endl;
    cout<<"Base class content"<<endl;

    test T2;
    cout<<T2.number<<endl;
    cout<<T2.name<<endl;
    return 0;
}
