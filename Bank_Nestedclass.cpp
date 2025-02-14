#include<iostream>
using namespace std;
class Bank{
	private:
		string accountholder;
		int accountnumber;
		string accounttype;
		int balance;
    public:
    	void setinfo(string holder,int number,string type,int bal)
    	{
    		accountholder=holder;
    		accountnumber=number;
    		accounttype=type;
    		balance=bal;
		}
		void getinfo()
		{
			cout<<"Account Holder Name:"<<accountholder<<endl;
			cout<<"Account Number:"<<accountnumber<<endl;
			cout<<"Account Type:"<<accounttype<<endl;
			cout<<"Balance:"<<balance<<endl<<endl;
		}
	
	class Transaction{
		private:
			double amount;
	    public:
	    	void deposite(double amt,Bank &obj)
	    	{
	    		amount=amt;
	    	    obj.balance+=amount;
	    		cout<<"Deposite Amount:"<<amount<<endl<<"New balance:"<<obj.balance<<endl<<endl;
			}
			void withdraw(double amt2,Bank &obj)
			{
				obj.balance-=amt2;
				cout<<"Withdraw Amount:"<<amt2<<endl<<"New balance:"<<obj.balance<<endl<<endl;
			}
	};
};
int main()
{
	Bank b1;
	Bank::Transaction t1;
	b1.setinfo("Ankita",0005,"saving",10000);
	b1.getinfo();
	
	t1.deposite(5000,b1);
	t1.withdraw(2000,b1);
	
	return 0;
}

