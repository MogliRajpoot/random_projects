#include <iostream>
#include <fstream>
using namespace std;  
int main()
{
	ifstream fin;
	fin.open("out.txt");
	char ch;
	int count=0;
	if(!fin){
		cout<<"File cannot be opened..."<<endl;
	}
	else
	{
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch==' ')
			count++;
	}
	cout<<"Number of blank spaces in file are "<<count;
	fin.close();
	cout<<endl;
	}
}

