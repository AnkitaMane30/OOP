#include<iostream>
using namespace std;
class outer{
	private:
		int a=10;
	public:
		void getouter()
		{
			cout<<"outer class variable"<<a<<endl;
		}
	
	class inner{
		private:
			int b=20;
		public:
			void getinner()
			{
				cout<<"Inner class variable"<<b<<endl;
			}
		    void getfromouter(outer &obj)
		    {
		    	cout<<"outer class variable"<<obj.a<<endl;
		    	
			}
	};
};

int main()
{
	outer o1;
	outer::inner i1;
	o1.getouter();
	i1.getinner();
	i1.getfromouter(o1);
	
	return 0;
}
