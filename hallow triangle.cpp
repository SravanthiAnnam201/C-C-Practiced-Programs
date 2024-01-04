
#include <iostream>

using namespace std;

int main()
{
    int l,b, i, j;
    cout<<"Enter no. of rows"<<endl;
    cin>>l;
    for (i=1; i<=l;i++)
    {
        for(j=1; j<=i;j++)
        {
            if(i==1||j==1||j==b||i==l||i==j) cout<<"* ";
            else cout<<"  ";
            
        }
        cout<<endl;
    }
    

    return 0;
}