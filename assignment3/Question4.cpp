#include <iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout << "Enter Number1: ";
	cin >> num1;
	cout << "Enter Number2: ";
	cin >> num2;
	cout << "Enter Number3: ";
	cin >> num3;
	if (num1 > num2 && num1 > num3)
		cout << "Number1 is the greatest number" << endl<<endl;
	if (num2 > num1 && num2 > num3)
		cout << "Number2 is the greatest number" << endl<<endl;
	if (num3 > num1 && num3 > num2)
		cout << "Number3 is the greatest number" << endl<<endl;
	return 0;
}
