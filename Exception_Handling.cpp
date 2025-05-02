#include<iostream>
using namespace std;

int main()
{
	int n,d,r;
	cout<<"Enter two Numbers";
	cin>>n>>d;
	try{
		if(d==0)
		{
			throw d;
			
		}
		
    }
	catch(int e){
		cout<<"Divide by zero Exception occurs"<<e<<endl;
	}
	
    r=n/d;
	cout<<r<<endl;
	
	return 0;
}

