#include<iostream>
using namespace std;
class Base1{
	public:
	  virtual void show()
		{
			cout<<"Its a base class 1"<<endl;
		}
};
class Derived:public Base1{
	public:
		void show(){
			cout<<"its a derived class"<<endl;
		}
};

int main()
{
	Base1 *b1;
	Derived d1;
	b1=&d1;
	b1->show();
	b1->show();

	
}
