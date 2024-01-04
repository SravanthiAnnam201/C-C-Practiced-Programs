
#include <iostream>

using namespace std;

int main()
{
    int l,b, i, j;
    cout<<"Enter rows"<<endl;
    cin>>l;
    int count=1;
    for (i=1; i<=l;i++)
    {
        for(j=1; j<=l;j++)
        {
            if(i+j>l){
             cout<<"count"<<" ";
             count++;
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    

    return 0;
}