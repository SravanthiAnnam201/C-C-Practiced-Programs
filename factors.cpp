// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    

   int a;
   cout<<"Enter the number that factors to be printed:"<<endl;
   cin>>a;
   for(int i=1;i<=a;i++)
   {
       if(a%i==0) cout<<i<<endl;
   }
    

    return 0;
}