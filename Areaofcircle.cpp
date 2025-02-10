#include<iostream>
using namespace std;
class Area{
	private:
		float rad;
	public:
		Area(float r){
			rad=r;
			float area=3.14*rad*rad;
			cout<<"area of circle="<<area<<endl;
		}
		
};
int main()
{
	float r;
	cout<<"Enter radius of circle"<<endl;
	cin>>r;
	
	Area a1(r);
	
	return 0;
}
