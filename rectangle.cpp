#include<iostream>
using namespace std;
class Rectangle
{
	public:
		double length ,breadth;
		Rectangle(double l,double b)
		{
			length=l;
			breadth=b;
		}
		void calculatearea()
		{
			double area;
			area=length*breadth;
			cout<<"area= "<<area<<endl;
		}
		Rectangle(Rectangle & obj )
		{
			length=obj.length;
			breadth=obj.breadth;
			
		}
};
int main()
{
	Rectangle r1(10,20);
	Rectangle r2=r1;
	r1.calculatearea();
	r2.calculatearea();
	return 0;
}
