#include<iostream>
using namespace std;
class Base1{
	public:
		void show()
		{
			cout<<"Its a base class 1"<<endl;
		}
};
class Base2{
    public:
        void display()
        {
            cout<<"Its a base class 2"<<endl;
        }
};
class Derived:public Base1,public Base2{
	public:
		void disp(){
			cout<<"its a derived class"<<endl;
		}
};

int main()
{
	Derived d1;
	d1.show();
	d1.disp();
	d1.display();
}
