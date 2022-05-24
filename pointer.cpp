#include<iostream>
using namespace std;
void change(int *,int *);
int main()
{
	/*int i=3,*p=&i;
	cout<<i<<endl;
	cout<<*p<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;*/
	int a=3,b=4;
	cout<<a<<endl;
	cout<<b<<endl;
	change(&a,&b);
	cout<<a<<endl;
	cout<<b<<endl;
}
void change(int *x,int *y)
{
	*x=*x+10;
	*y=*y+10;
}
