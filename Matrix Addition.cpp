
#include <iostream>

using namespace std;

int main()
{
    int m,n, i, j;
    cout<<"Matrix Addition"<<endl;
    cout<<"Enter no. of Rows and Columns respectively: "<<endl;
    cin>>m>>n;
    int A[m][n], B[m][n];
    cout<<" Enter A matrix Elements "<<endl;
    for (i=0; i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<" Enter B matrix Elements "<<endl;
    for (i=0; i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>B[i][j];
        }
    }
    
    cout<<" The Result is  "<<endl;
    
    for (i=0; i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<(A[i][j]+B[i][j])<<"  ";
        }
        cout<<endl;
    }

    return 0;
}