/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

int main() {
	int i, j, n, count = 0;
	cout << "Enter the number ";
	cin >> n;
	for (i = 2; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0)
		{
			cout << i << endl;
		}
		count = 0;
	}
	return 0;
}
