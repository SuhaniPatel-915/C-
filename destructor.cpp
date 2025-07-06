/*#include <iostream>  
using namespace std;  
class A
{  
  int x ;
  public:
  	A()
  	{
  		cout<<x;
  		cin>>x;
    }
    ~A()
    {
    	cout<<"memory reference";
	}
};
int main()
{
	A s1;
}*/
#include <iostream>

class A {
public:
    // Constructor
    A() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~A() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Creating an object of MyClass
    A Obj;

    // The object goes out of scope at the end of the block
    // Destructor will be called automatically

    return 0;
}

