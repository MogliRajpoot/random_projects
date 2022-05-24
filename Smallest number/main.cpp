#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	cout<<"Enter z: ";
	cin>>z;
	if(x<y&&x<z)
	cout<<"x is the smallest number"<<endl;
	if(x>y&&z>y)
	cout<<"y is the smallest number"<<endl;
	if(z<x&&z<y)
	cout<<"z is the smallest number"<<endl;
	return 0;
}
