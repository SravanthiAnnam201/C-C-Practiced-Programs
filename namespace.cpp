# include<iostream>
using namespace std;
    
/*program for using namespace

*/
namespace first
{
	void fun()
	{
		cout<<"first"<<endl;
	}
};
namespace second
{
	void fun()
	{
		cout<<"second"<<endl;
	}
};
using namespace second
int main()
{
	first::fun();

}