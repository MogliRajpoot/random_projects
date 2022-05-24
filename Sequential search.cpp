#include<iostream>
using namespace std;
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int found=0;
	int key;
	int position;
	cout<<"Enter your desired number"<<endl;
	cin>>key;
	for(int i=0;i<10;i++)
	{
		if(arr[i]==key);
		{found=1;position=i;}
	}
	if(found)
	cout<<"Desired number "<<key<<" is at position "<<position+1;
	else
	cout<<"Desired number is not found in the list";
}
