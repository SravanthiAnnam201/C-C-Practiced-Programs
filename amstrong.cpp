// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int n,sum=0,r,temp;
    cout<<"Enter the number to be checked as amstrong: "<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum+=(r*r*r);

        n=n/10;
        
    }

    if(temp==sum) cout<<"amstrong number";
    else cout<<"Not an Amstrong number";
    
  return 0;
}