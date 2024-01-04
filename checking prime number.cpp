// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int a,count=0;
    cout<<"Enter the number to check if it is a prime numbers: "<<endl;
    cin>>a;
    for (int i=2;i<a;i++)
    {
        if(a%i==0) count++;
    }
    if (count>=1) cout<<"Not a Prime number"<<endl;
    else cout<<"Prime number"<<endl;
  return 0;
}