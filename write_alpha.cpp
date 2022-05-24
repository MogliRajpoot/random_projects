
#include <iostream>
#include<conio.h>
#include <fstream>
using namespace std;  
int main()
{
	ofstream fout("out.txt");
	fout<<"pakistan    1234";
	fout.close();
	getch();
	return 0;
}
