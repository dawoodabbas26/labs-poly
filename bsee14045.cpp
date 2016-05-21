#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>

using namespace std;

class band
{
	private:
		string name;
	protected:
		int count;
		virtual int counter()=0;
	public:
		
		void Setter(string name)
		{
			this->name=name;
		}
		
		string getter()
		{
			return this->name;
		}
};

class metal: public band
{
	protected:
		
		int pyro;
		int members;
		
		
		
	public:
		
			public:
		
		metal()
		{
			
			pyro=4;
			members=4;
			
		}
		
		int counter()
		{
			return (pyro+ members);
		}
};


class march: public band
{
};

class symphony: public band
{
	protected:
		
			int conductor;
			int members;	
		
	
	public:
		
		symphony()
		{
			
			conductor=1;
			members=4;
			
		}
		int counter()
		{
			return (conductor + members);
		}
};


int main ()
{
	metal x;
	x.Setter("metal\n");
	cout<<x.getter();
	cout<<"total members in metal ";
	cout<<x.counter()<<endl;
	
	symphony y;
	y.Setter("Symphony\n");
	cout<<y.getter();
	cout<<"total members in symphony ";
	cout<<y.counter()<<endl;
	
	
	
	
}
