#include<iostream>
using namespace std;
class parent
{ 
	public:
		string name;
		void getdetails()
		{
			cout<<" enter the name"<<endl;
			cin>>name;
			}
};
class child:public parent
{
	public:
		int rollno;
		int get()
		{
			cout<<" enter the roll nuumber"<<endl;
			cin>>rollno;
			
		}
		int out()
		{
			cout<<" name is "<<name<<endl;
			cout<<"roll number"<< rollno<<endl;
					}
};
int main()
{
	child c;
	c.getdetails();
	c.get();
	c.out();
	return 0;
}
