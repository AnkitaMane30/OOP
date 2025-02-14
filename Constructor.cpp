#include<iostream>
using namespace std;
class Demo{
	private:
		int *p;
    public:
    	void getinfo()
    	{
    		cout<<*p<<endl;
		}
		void setinfo(int v)
		{
			*this->p=v;
		}
		Demo(int x)
		{
			p=new int(x);
		}
		Demo(const Demo &obj)
		{
			//p=obj.p; //shallow copy of construtor
			p=new int(*(obj.p)); //deep copy of constructor
		}
		~Demo()
		{
			delete p;
			cout<<"Destructor called"<<endl;
		}
};

int main()
{
	Demo d1(111);
	d1.getinfo();
	Demo d2(d1);
	d2.getinfo();
	d2.setinfo(222);
	d2.getinfo();
	d1.getinfo();
	d2.~Demo();
	d1.getinfo();
	d2.getinfo();
	
	
	return 0;
}
