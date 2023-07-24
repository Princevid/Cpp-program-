#include<iostream>
using namespace std;
class course
{
	public:
		int sem,total_no;
		void getdetails()
		{
			cout<<" enter semester"<<endl;
			cin>>sem;
			cout<<" enter total number of student "<<endl;
			cin>>total_no;
			
		}
};
class bcacs:public course
{
	public:
		int sem1,number;
	void printdetails()
	{
		sem1=sem;
		number=total_no;
		cout<<" the semester is "<<sem1<<"\n"<<"the total number of students are"<<"\n"<<number<<endl;
	}
};
class bfs:public course
{
	public:
		int sem1,number;
		void printdetails()
		{
			sem1=sem;
			number=total_no;
			cout<<" the semseter is "<<sem1<<"\n"<< "the total number of students are"<<number <<"\n"<<endl; 
		
		}
};
int main()
{
	bcacs b;
	b.getdetails();
	b.printdetails();
    bfs f;
    f.getdetails();
	f.printdetails();
		return 0;
	}

