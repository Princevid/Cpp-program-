#include<iostream>
#include<string>
using namespace std;

class detail 
{
	public:
		
		string name;
		string salary;
		int id;
		void printdetail()
		{
			cout<<"print name"<<name<<endl;
			cout<<"print salary"<<salary<<endl;
			cout<<"print id"<<id<<endl;
		}
};
   
   int main()
   {
   	detail E;
   	
   E.name ="pankaj";
   E.salary="one crore";
   E.id=653;
   E.printdetail();
   return 0;
   }
