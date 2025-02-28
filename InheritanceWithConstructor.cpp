#include<iostream>
using namespace std;
class Base{
	public:
		Base()
		{
			cout<<"base class constructor"<<endl;
		}
		~Base()
		{
			cout<<"base class destructor"<<endl;
		}
		
};
class Derived:public Base{
	public:
		Derived()
		{
			cout<<"Derived class constructor"<<endl;
		}
		~Derived()
		{
			cout<<"Derived class destructor"<<endl;
		}
};

int main()
{
	Derived d1;
	
	
	return 0;
}
