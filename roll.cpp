#include<iostream>
using namespace std;

int main()
{
	int student[4][2];
	int i,stud;
	for(i=0;i<=3;i++)
	{
		cout<<"Enter Roll no and marks of student : "<<endl;
	    cin>>student[i][0]>>student[i][1];
	}
	for(i=0;i<=3;i++)
	{
		cout<<student[i][0]<<student[i][1]<<endl;
	}
}
