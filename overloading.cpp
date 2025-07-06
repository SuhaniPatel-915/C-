#include<iostream>
using namespace std;
class addition 
{
	public:
		int sum(int a,int b)
		{
			cout<<"sum of a and b is:"<<a+b<<endl;
		}
		int sum(int a ,int b,int c)
		{
			cout<<"sum of a,b and c is:"<<a+b+c;
		}
};
int main()
{
	addition obj;
	obj.sum(10,20);
	obj.sum(10,20,30);
}
