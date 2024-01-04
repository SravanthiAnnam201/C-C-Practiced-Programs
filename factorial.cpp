# include<iostream>
using namespace std;
    

int main()
{
	int n,final=1,i;
	cout<<"enter the number ";
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
	    final=final*i;
	}
    cout<<"Factorial of "<<n <<" is "<<final;
}