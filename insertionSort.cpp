#include <iostream>
using namespace std;

int main()
{
    int n,i,j,key;
    cout<<"Enter no. of elements in an Array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter data to Array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(i=0;i<n-1;i++)
    {
        key=a[i+1];
        j=i;
        while(key<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
        for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}