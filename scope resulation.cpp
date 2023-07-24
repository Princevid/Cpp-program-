//scope resulation operator
// method outside the class
#include<iostream>
#include<string>
using namespace std;
 class employee
 {
 	public:
 		int age;
 		string name;
 		string salary;
 		void input();
 		void printname()

{ 
cout<<"age"<<age<<endl;
cout<<"name"<<name<<endl;
cout<<"salary"<<salary<<endl;
 } 
 };
 void employee::input()
{
	cout<<"enter your name"<<endl;
	cin>>name;
	cin>>age;
	cin>>salary;
}
//creating object 
int main()
{
	employee E1;
	E1.age=26;
	E1.name="mayank";
	E1.salary="one crore";
	E1.input();
	E1.printname();
	return 0;
}
