#include<iostream>
using namespace std;
class circle{
	protected:
		int r=10;
		
};
class area:protected circle{
		
	public:
		void disp()
		{
			cout<<"Area of circle is:";
			int a=3.14*r*r;
			cout<<a<<endl;
		}	
};
class perimeter:public area{
	public:
		void display(){
			cout<<"Perimeter of circle is:";
			float p=2*3.14*r;
			cout<<p;
		}
};

int main()
{
	perimeter p;
	p.disp();
	p.display();
	
	return 0;
}

