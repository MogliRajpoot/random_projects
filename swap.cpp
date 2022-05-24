#include<iostream>
using namespace std;
int swap(int *,int *);

int main()
{
	int a=3,b=4;
	cout<<a<<endl;
	cout<<b<<endl;
	swap(&a,&b);
	cout<<a<<endl;
	cout<<b<<endl;
	
	
}
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	
}
