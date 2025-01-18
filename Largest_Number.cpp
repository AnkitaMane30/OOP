#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Find largest number among 3 numbers:"<<endl;
	cout<<"Enter 3 numbers"<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"Largest number is:"<<a<<endl;
	}
	
	else if(b>a && b>c)
	{
		cout<<"Largest Number is:"<<b<<endl;
	}
	else
	{
		cout<<"Largest number is: "<<c<<endl;
	}
	return 0;
}
