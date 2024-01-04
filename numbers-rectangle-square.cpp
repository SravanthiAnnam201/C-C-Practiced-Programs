
#include <iostream>

using namespace std;

int main()
{
    int l,b, i, j;
    cout<<"Enter length and breadth:"<<endl;
    cin>>l>>b;
    int count=1;
    for (i=1; i<=l;i++)
    {
        for(j=1; j<=b;j++)
        {
            
             cout<<count<<" ";
             count++;
        }
        cout<<endl;
    }
    

    return 0;
}