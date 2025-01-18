#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cout<<"Enter any number"<<endl;
	cin>>a;
	cout<<"Multiplication Table of:-"<<a<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<a<<"x"<<i<<"="<<a*i<<endl;
	}
	
	return 0;
}
