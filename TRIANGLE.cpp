#include<iostream>
using namespace std;
class Triangle
{
	private:
		double height;
		public:
			double base;
			public:
				Triangle(double h,double b)
				{
					height=h;
					base=b;
				}
				void printarea()
				{
					double area;
					area=0.5*height*base;
					cout<<"area of triangle is "<<area<<endl;
				}
};
int main()
{
	Triangle r1(2,10);
	r1.printarea();
	return 0;
}
