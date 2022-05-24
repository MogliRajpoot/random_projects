#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cout<<"Enter the first numbmer(a) :: ";
	cin>>a;
	cout<<"Enter the second number(b) :: ";
	cin>>b;
	cout<<"Press 1 for Addition"<<endl;
	cin>>c;
	if(c==1) {cout<< a <<"+"<< b <<"="<<a+b<<endl;}
    cout<<"Press 2 for Subtraction"<<endl;
    cin>>c;
    if(c==2) {cout<< a <<"-"<< b <<"="<<a-b<<endl;}
	cout<<"Press 3 for Multiplication"<<endl;
	cin>>c;
	if(c==3) {cout<< a <<"X"<< b <<"="<<a*b<<endl;}
	cout<<"Press 4 for Division"<<endl;
	cin>>c;
	if(c==4) {cout<< a <<"/"<< b <<"="<<a/b<<endl;}
	cin>>c;
	if(c==5) {cout<<"Exit";}
	return 0;
}
