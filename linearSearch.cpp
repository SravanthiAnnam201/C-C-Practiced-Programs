/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int A[10],i,n,key;
    cout << "enter the numbers" << endl;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for (i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    cout << "enter the Key" << endl;
    cin>>key;
    for (i=0;i<n;i++)
    {
        if (A[i]==key)
        {
            cout<<"key "<<key<<" fount at index "<<i<<endl;
            return 0;
        }
        
    }
    cout<<"not found";
}
