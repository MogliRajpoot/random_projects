#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char x;
	int v=0;
	
	fstream file("out.txt",ios::in);
	while(!file.eof())
	{
		file.get(x);
		if(x==' ')
		v++;
	}
	file.close();
	cout<<"Number of spaces are "<<v;
	
}
