#include<iostream>
using namespace std;
class triangle
{
	public:
		double height;
		private:
			double base;
			public:
				triangle(double h,double b)
{
	height=h;
	base=b;
	}
	void printarea()
	{
		double area;
		area=0.5*base*height;
		cout<<"area="<<area<<endl;
	}
	};
	int main()
	{
		triangle t1(15,10);
		t1.printarea();
		return 0;
	}
