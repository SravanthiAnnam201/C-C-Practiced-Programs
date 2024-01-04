
#include<iostream>
using namespace std;

int getFibanocci(int b){
    if(b==1 || b==2)
       { return 1;} 
    else 
    {
        return getFibanocci(b-1)+getFibanocci(b-2);
    }
}

int main() {
	int n,i;
	cin>>n;
	for (i=1;i<=n;i++){
	cout<<getFibanocci(i)<<endl;
	}
	return 0;

}
