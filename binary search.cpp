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
    
    int arr[] = { 2, 3, 4, 10, 40 };
    int key = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int low=0;
    int high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key==arr[mid])
        {
            cout<<"found at "<<(mid+1)<<endl;
            return 0;
        }
        else if (key>arr[mid]) low=mid;
        else high=mid;
    }
    cout<<"Not found";
    return 0;
    
    
}
