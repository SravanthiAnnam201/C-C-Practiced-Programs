// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;



int prime(int b)
{
    int count=0;
    for(int i=2;i<b;i++)
    {
        if(b%i==0) count++;
    }
    if(count==0) return 1;
    else return 0;
}






int main() {
    
    int a,count=0,sum=0;
    cout<<"Enter the number in which the prime numbers have to be printed: "<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(prime(i)) sum=sum+i;
    }
    cout<<"Sum of prime numbers is:"<<sum<<endl;
    
  return 0;
}