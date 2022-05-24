#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int password,password1;
	string username,username1;
	cout<<"\tRegister your account"<<endl;
	cout<<"Enter User name"<<endl;
	cin>>username1;
	cout<<"Enter Password"<<endl;
	cin>>password1;
	cout<<"Your account is registered"<<endl;
	cout<<"\tLogin page"<<endl;
	cout<<"Enter User name"<<endl;
	cin>>username;
	cout<<"Enter Passowrd"<<endl;
	cin>>password;
	try
	{
		if(username!=username1)
		{
	    throw (username);
		}
	    else if(password!=password1) 
	    {  
		  throw (password);	
		}
		else 
		{
			cout <<"You are loged in";
		}
	}
	catch(string i)
	{
		cout<<"Invalid username";
	}
	catch(int i)
	{
		cout<<"Invalid Password";
	}
}
