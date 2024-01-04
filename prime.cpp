/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

int main() {
	int i, n, count = 0;
	cout << "Enter the number ";
	cin >> n;
	for (i = 2; i < n; i++)
	{

		if (n % i == 0)
			{
				count++;

			}
	}
		if (count >= 1)
		{
			cout << "Not a prime";
		}
		else cout<<"prime";
	
	return 0;
}
