#include<iostream>
using namespace std;
class example
{
	public:
		int a;
		example add(example a5,example a6)
		{
			example a3;
			a3.a=a5.a+a6.a;
			return a3;
			
		}
};
int main()
{
	example a1,a2,a3;
	a1.a=20;
	a2.a=30;
	a3.a=0;
	a3=a3.add(a1,a2);
	cout<<"sum="<<a3.a<<endl;
	return 0;
}
