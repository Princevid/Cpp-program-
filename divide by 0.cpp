#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter number a"<<endl;
	cin>>a;
	cout<<"enter number b"<<endl;
	cin>>b;
	try
	{
		if (b==0)
		throw 2;
		cout<<"division is\n"<<a/b;
	}
	catch(int x)
	{
		cout<<"divide by 0 error";
	}
}
