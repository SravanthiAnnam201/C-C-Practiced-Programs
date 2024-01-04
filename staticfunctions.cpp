
#include <iostream>
using namespace std;

class test
{   public:

    int number;
    string name;
    
    static int count;
    test(int x, string n)
    {
        number=x;
        name=n;
        count++;
    }
    static void display()
    {
        cout<<"no. of objects are (static function): "<<count<<endl;
    }
    
};

int test::count=0;

int main()
{
  test t1(1,"sravs"),t2(2,"sravanthi"),t3(3,"sravanthi annam");
  t1.display();
  cout<<"No. of Objects created are:"<<test::count<<endl;
    
    
    
    return 0;
}
