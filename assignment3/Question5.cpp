#include<iostream>
using namespace std;

int sum_number(int n);

int main()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "Sum =  " << sum_number(n);

	return 0;
}

int sum_number(int n)
{
	if (n != 0)
		return n + sum_number(n - 1);
	return 0;
}
