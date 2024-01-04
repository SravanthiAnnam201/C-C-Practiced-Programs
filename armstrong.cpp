# include<iostream>
#include <cmath>
using namespace std;
    

int main()
{
	int n,final=1,i,r,sum=0,count=0, power,m;
	cout<<"enter the number ";
	cin>>n;
	m=n;
	
    while(n>0)
    {

        n=n/10;
        count=count+1;

    }
    n=m;
    while(n>0)
    {
        r=r%10;
        n=n/10;
        power=round(pow(r,count));
        sum=sum+power;

    }
    if(sum==n)
        cout<<"Armstrong number";
    else cout<<"Not a Armstrong number";
    
    return 0;
}