
#include <iostream>

using namespace std;

int main()
{
    int l,b, i, j;
    cout<<"Enter length and breadth:"<<endl;
    cin>>l>>b;
    for (i=1; i<=l;i++)
    {
        for(j=1; j<=b;j++)
        {
            
             cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}