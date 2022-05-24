#include <iostream>

using namespace std;

int main()
{
	int x,y,b;
	cout<<"Enter the number :: ";
	cin>>x;
	cout<<"Enter the multiplyer :: ";
	cin>>y;
	for(b=1;b<=y;b++)
	{
		cout<< x << " X " << b << " = " << x*b <<endl;
		
	}
	return 0;
}
