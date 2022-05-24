#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char x;
	int v=0;
	fstream file;
	file.open("Myfile.txt",ios::out);
	file<<"Pakistan"<<endl;
	file.close();
	file.open("Myfile.txt",ios::in);
	while(!file.eof())
	{
		file.get(x);
		if(x>='a'&&x<='z'||x>='A'&&x<='Z'||x==' ')
		v++;
		cout<<x;
	}
	cout<<"Number of characters = "<<v<<endl;
	file.close();
}
