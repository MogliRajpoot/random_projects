#include<iostream>
#include<fstream>
using namespace std;
int roll;
int main()
{
struct student
{
	int rollno;
	char name[20];
	char branch[3];
	float marks;
	char grade;
}stud1;
 
    cout<<"Enter rollno of student to be search for: ";
	cin>>roll;
ifstream fin("marks.dat", ios::in | ios::binary);


while(!fin.eof())
{
	fin.read((char *)&stud1, sizeof(stud1));    
	if(stud1.rollno == roll)                  
	{
		:                  
		
		found = 'y';       
		break;             
	}
}

if(found == 'n')                    
{
	:                         
}
}

