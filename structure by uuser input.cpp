#include<iostream>
using namespace std;

struct book 
	{
		char name[10];
		float price;
		int pages;
	}   b1,b2,b3,b4;

int main()
{
	struct book;
cout<<"Enter name of first book"<<endl;
cin>>b1.name;
cout<<"Enter price of first book"<<endl;
cin>>b1.price;
cout<<"Enter pages of first book"<<endl;
cin>>b1.pages;
cout<<"Stored data is below : "<<endl;
cout<<"Name : "<<b1.name<<endl;
cout<<"price : "<<b1.price<<endl;
cout<<"pages : "<<b1.pages<<endl;
}

