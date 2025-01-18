#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b;
	cout<<"Arithmetic Operations"<<endl;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Addition="<<"\t"<<setw(6)<<a+b<<endl;
	cout<<"substraction="<<"\t"<<setw(6)<<a-b<<endl;
	cout<<"Multiplication="<<"\t"<<setw(6)<<a*b<<endl;
	cout<<"division="<<"\t"<<setw(6)<<a/b<<endl;
	cout<<"Modulus="<<"\t"<<setw(6)<<a%b<<endl;
	
	return 0;
}
