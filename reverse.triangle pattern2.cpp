
#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cout<<"Enter no. of rows";
    cin>>n;
    for (i=n; i>=1;i--)
    {
        for(j=i; j>=1;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}