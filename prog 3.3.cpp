#include <iostream>
using namespace std;
class sample
{
	private:
		int d1;
		char d2;
	public:
		void set (int i, char c)
		{
			d1=i;
			d2=c;
		}
		void display(void)
		{
			cout<<"d1 = "<<d1<<endl;
			cout<<"d2 = "<<d2;
		}
};
int main()
{
	sample *s_ptr;
	try
	{
		s_ptr = new sample;
	}
	catch  (bad_alloc ba)
	{
		cout<<"Bd allocation occured...the program will terminate now..";
		return 1;
	}
	s_ptr->set(25,'A');
	s_ptr->display();
	delete s_ptr;
}
