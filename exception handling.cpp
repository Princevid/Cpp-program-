#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter number\n";
	cin>>x;
	try
	{
		if(x<=0)
		throw 2;
		cout<<"value is greater than 0";
		
	}
	catch(int x)
	{
		cout<<"value is less thsn equal to 0";
		
	}
}
