#include<iostream>
using namespace std;
/*int m=10;
int main()
{
	int m=20;
	cout<<m<<endl;
	cout<<::m;
}*/
int a=20;
int main()
{
   int a=10;
  {
	int a=30;
	cout<<"inner block: ";
	cout<<a<<endl;
	cout<<::a<<endl;
  }
	cout<<"outer block: ";
	cout<<a<<endl;
	cout<<::a<<endl;
}
