#include <iostream>
#include<time.h>
using namespace std;

int main()
{
	srand(time(0));
	string password;
	string data;
	int n;
	
	data = "abcdefghijklmnopqrstuvwxyz"
						  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
						  "!@#$%^&*-:;,?()[]><_/=÷×+~`"
						  "1234567890";
	cout<<"Enter length of the password : ";	
	cin>>n;			  
	for(int i=0;i<n;i++)
	{
		password=password+data[rand()%93];
	}
	cout<<"password is : "<<password;
						  
}