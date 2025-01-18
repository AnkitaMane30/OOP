#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int price[5];
	string items[5];
	int i,total;
	cout<<"enter items and their prices"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>items[i];
		cin>>price[i];
	
	}
	for(i=0;i<5;i++)
	{
		cout<<items[i];
		cout<<"\t"<<setw(5)<<price[i]<<endl;
		total+=price[i];
	}
	cout<<"--------------"<<endl;
	cout<<"Total="<<"\t"<<setw(6)<<total;
}
