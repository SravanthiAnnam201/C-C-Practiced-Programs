#include <bits/stdc++.h>
using namespace std;
  

void TraverseString(string &str, int N)
{

    for (auto &ch : str) {
  
 
        cout<< ch<< " "<<endl;
    }
}

int main()
{
    string str = "GeeksforGeeks";
  
    int N = str.length();
  
    TraverseString(str, N);
}