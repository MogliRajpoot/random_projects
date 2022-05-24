#include <iostream>
using namespace std;

int main()
{
	char a;
	cout<<"Enter any character"<<endl;
	cin>>a;
	if(a>=97&&a<=122)
	cout<<a<<" is a lower case alphabet"<<endl;
	else if(a>=65&&a<=90)
	cout<<a<<" is an upper case alphabet"<<endl;
	else if(a>=48&&a<=57)
	cout<<a<<" is a digit"<<endl;
	else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
	cout<<a<<" is a speacial symbol"<<endl;
	return 0;
}
