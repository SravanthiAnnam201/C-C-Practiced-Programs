#include <iostream>

using namespace std;

int main()
{
    int l, i, j,k;
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
            
            if(j==1||j==(2*i-1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    for (i=l-1; i>=1;i--)
    {
        for (k=1; k<=l-i;k++)
        {
            cout<<"  ";
        }
        
        for(j=1; j<=(2*i-1);j++)
        {
            
            if(j==1||j==(2*i-1)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
            
            
