#include <iostream>

using namespace std;

int main()
{
    int l, i, j,k;
    int count=1;
    cout<<"Enter rows:"<<endl;
    cin>>l;
    for (i=1; i<=l;i++)
    {
        for (k=1; k<=l-i;k++)
        {
            cout<<"  ";
        }
        
        for(j=1; j<=(2*i-1);j++)
        {
            
             cout<<count<<" ";
             count++;
        }
        cout<<endl;
    }
    

    return 0;
}