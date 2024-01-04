#include<iostream>
#include<string>

using namespace std;

int main() {
	string name;
	getline(cin, name);
	string s;
	int a = name.length();
    int b=a;
    while(b>0)
    {

			s =s+name[b-1];
			b--;

		
	}

	if (name == s) {
		cout << "palindrome";

	}
	else {
		cout << " not palindrome";
	}

}