#include<iostream>
using namespace std;
class Rectangle{
	private:
		int hei;
		int wid;
		int area;
	public:
		Rectangle(int h,int w)
		{
			hei=h;
			wid=w;
			area=hei*wid;
			
			cout<<"Area of Rectangle:"<<area<<endl;
		}
		Rectangle()
		{
			cout<<"default constructor called";
		}				
};
int main()
{
	int a,b;
	cout<<"Enter height and width of Rectangle:"<<endl;
	cin>>a>>b;
	
	Rectangle r1(a,b);
	Rectangle r2;
	
	return 0;
}
