#include <iostream>
using namespace std;
char choice = 'y';
int a, b, operation;
int main()
{
	while (choice == 'y' || choice == 'Y')
	{
		cout << "MENU" << endl;
		cout << "1. ADDITION" << endl;
		cout << "2. SUBTRACTION" << endl;
		cout << "3. MULTIPLICATION" << endl;
		cout << "4. DIVISION" << endl;
		cout << "5. MODULUS" << endl;
		cout << "Enter the operation<1-5>" << endl;
		cin >> operation;
		cout << "Enter two numbers" << endl;
		cin >> a >> b;

		switch (operation)
		{
		case 1:
			cout << "Addition is " << a + b << endl;
			break;
		case 2:
			cout << "Subtractaion is " << a - b << endl;
			break;
		case 3:
			cout << "Multiplication is " << a * b << endl;
			break;
		case 4:
			cout << "Division is " << a / b << endl;
			break;
		case 5:
			cout << "Modulus is " << a % b << endl;
			break;
		default:
			cout << "Invalid operation input" << endl;
			break;
		}
		cout << "Do you want to continue the operation? y/n." << endl;
		cin >> choice;
	}
}
