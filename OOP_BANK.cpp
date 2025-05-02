#include<iostream>
using namespace std;
int main()
{
	int choice;
	int arr[20];
	float deposite,withdraw;
	cout<<"Welcome to OOP Bank"<<endl;
	cout<<"1.Deposite Amount"<<endl;
	cout<<"2.Withdraw Amount"<<endl;
	cout<<"3.Print Last 10 Statements"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter amount to deposite";
			cin>>deposite;
			break;
		case 2:
			cout<<"Enter Amount to withdraw";
			cin>>withdraw;
			break;	
		
	}
	

	return 0;
}
