#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"This is a vehicle\n";
			
		}
};
class Fourwheeler:public vehicle
{
	public:
		Fourwheeler()
		{
			cout<<"Fourwheeler vehicle\n";
		}
};
class car:public Fourwheeler
{
	public:
		car()
		{
			cout<<"car has 4 wheel\n";
		}
};
int main()
{
	car k;
	return 0;
}
