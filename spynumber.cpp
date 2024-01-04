# include<iostream>
using namespace std;
    

int main()
{
	int n,final=1,i,r,sum=0,product=1;
	cout<<"enter the number ";
	cin>>n;
	
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        product=product*r;

    }
    if(sum==product)
    {
    cout<<"Spy number"<<endl;
    }
    else
    cout<<"Not a spy number"<<endl;
    return 0;
}