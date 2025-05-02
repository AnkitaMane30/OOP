#include<iostream>
#include<stdexcept>
using namespace std;
class Bus_booking{
	public:
	string source;
	string destination;
	int ticket;
	int max_seats=50;
	int booked_seats=0; 
	
    Bus_booking(string s,string d,int t=1)
	{
		if(t>(max_seats-booked_seats))
		{
			throw runtime_error("There are not that many seats available.");
		}
		source=s;
		destination=d;
		ticket=t;
		booked_seats+=ticket;
    }
    void show_booking()
    {
    	cout<<"\nSource:"<<source<<endl;
        cout<<"Destination:"<<destination<<endl;
    	cout<<"No. of Tickets:"<<ticket<<endl;
    	cout<<"Available tickets:"<<(max_seats-booked_seats)<<endl;
	}
//	static int available()
//	{
//		return (max_seats-booked_seats);
//	}	
};

int main(){
	try{
	Bus_booking b1("ichalkarnji","Pune",20);
	b1.show_booking();
	
    Bus_booking b2("ichalkarnji","Pune",20);
	b2.show_booking();
	
	Bus_booking b3("ichalkarnji","Pune",20);
	b3.show_booking();	
}

catch(runtime_error &e)
{
	cout << "Exception: " << e.what() << endl;
	//cout << "Available Seats: " <<Bus_booking::available() << endl;
}
}
