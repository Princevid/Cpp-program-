#include<iostream>
using namespace std;
class Prince
{
	public:
		string name;
		nameprint()
		{
			cout<<"enter name"<<name<<endl;
		}
};
int main()
{
	Prince p;
	p.name="prince";
	p.nameprint();
}
