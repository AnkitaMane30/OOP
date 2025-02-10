#include<iostream>
using namespace std;
class Student{
	private:
		string nm;
		int roll;
		string age;
		string add;
		float mark;
	public:
		void get()
		{
			cout<<"Enter your name:"<<endl;
			cin>>nm;
			cout<<"Enter Roll NO.:"<<endl;
			cin>>roll;
			cout<<"Enter your age:"<<endl;
			cin>>age;
			cout<<"Enter Address:"<<endl;
			cin>>add;
			cout<<"Enter your Marks:"<<endl;
			cin>>mark;
		}
		void set()
		{
			cout<<"Name:"<<nm<<endl;
			cout<<"Roll No.:"<<roll<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Address:"<<add<<endl;
			cout<<"Marks:"<<mark<<endl;
		}
		
};
int main()
{
	Student s1;
	s1.get();
	s1.set();
	
	return 0;
}
