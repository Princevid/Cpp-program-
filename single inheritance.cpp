#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"this is a vehicle\n";
			
		}
};
class car: public vehicle

{
};

int main()
{
	car j;
	return 0;
}
