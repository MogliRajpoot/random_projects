#include<iostream>
using namespace std;
int main()
{
	int password,password1,number,number1,choice;
	string username,username1,reset,mail,mail1;
	cout<<"\tRegister your account"<<endl;
	cout<<"Enter User name"<<endl;
	cin>>username1;
	cout<<"Enter integer Password"<<endl;
	cin>>password1;
	cout<<"Enter recovery email"<<endl;
	cin>>mail1;
	cout<<"Enter recovery phone number"<<endl;
	cin>>number1;
	system("pause");
	system("cls");
	cout<<"Your account is registered"<<endl;
	cout<<"\tLogin page"<<endl;
	cout<<"Enter User name"<<endl;
	cin>>username;
	
	try 
	{
		if(username==username1)
		{ 
		cout<<"Enter integer Passowrd"<<endl;
	    cin>>password;
	    try
	    {
	    	if(password==passowrd1)
	    	cout<<"You are logined"<<endl;
	    	else
	    	throw(password);
		}
		catch(int i)
		{
			cout<<"Incorrect password"<<endl;
			cout<<"If you want to reset your password enter 'y'"<<endl;
			cin>>reset;
			if(reset=='y'||reset=='Y')
			{cout<<"Choose Your recovery method"<<endl;
			 cout<<"1. Email."<<endl;
			 cout<<"2. Phone number"<<endl;}
			cin>>choice;
			switch(choice);
			case 1:
				cout<<"Enter your recovery email"<<endl;
				cin>>mail;
				if(mail==mail1)
				{   cout<<"Your email is verified please type your new password";
					cin>>password1;}
				else
				cout<<"Recovery email is incorrect, try another method"<<endl;
				break;
			case 2:
			    cout<<"Enter your phone number"<<endl;
				cin>>number;
				if(number==number1)
				{   cout<<"Your phone number is verified please type your new password";
					cin>>password1;}
				else 
				cout<<"Invalid phone number"<<endl;
			default	
		}
	    }
		else
	    throw(username);
	    }
	catch 
	{
		
	}
}
