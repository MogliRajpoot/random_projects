/*FACTORIAL OF ANY NUMBER*/
#include <iostream>

using namespace std;

int main()
{
	int x,f;
	cout<<"Enter any number :: ";
	cin>>x;
	for(f=1;x>=1;x--)
	{
		f=f*x;        
	}
	 	cout<<"The factorial of the number is :: ";
	 	cout<<f;
    return 0;
}
