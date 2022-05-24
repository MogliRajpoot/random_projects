#include <iostream>
using namespace std;

int main(){
	
	int arr[][3]={12,34,23,45,56,45};
	cout<<"arr = "<<arr<<endl;
	cout<<"arr = "<<&arr[0]<<endl<<endl;
	
	cout<<"arr+1 = "<<arr+1<<endl;
	cout<<"&arr[1] ="<<&arr[1]<<endl<<endl;
	cout<<"*(&arr[i][j])"<<endl;
	
	for (int i=0;i<=1;i++)
		for (int j=0;j<=2;j++)
			{
				
			//cout<<&arr[i][j]<<"    ";
			cout<<*(&arr[i][j])<<"          ";
		}
		cout<<"\n&arr[i][j]"<<endl;
		for (int i=0;i<=1;i++)
			for (int j=0;j<=2;j++)
			{
				cout<<&arr[i][j]<<"    ";
			//cout<<*(&arr[i][j])<<endl;
			
			
		}
			 
	
	
}
