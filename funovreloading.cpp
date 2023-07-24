 #include<iostream>
 using namespace std;
 class num
 {
 	public:
 		int i;
 		int j;
 		void fun(int i)
 		{
 			cout<<"print value i\n";
 			
		 }
		 void fun(double j)
		 {
		 	cout<<"print value j";
		 }
 };
 int main()
 {
 	num obj;
 	obj.fun(10);
 	obj.fun(15.0);
 	
 	return 0;
 }
