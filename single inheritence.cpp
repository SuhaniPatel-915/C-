#include<iostream>
using namespace std;
class A{
	public:
		int x,y;
		int get_data()
		{
			cout<<"enter the value of x :";
			cin>>x;
			cout<<"enter the value of y :";
			cin>>y;
		}
};
class B:public A {
	public:
		int z;
		int sum()
		{
			z=x+y;
			cout<<"sum of x and y is :"<<z;
		}
};
int main()
{
	B obj;
	obj.get_data();
	obj.sum();
}
