#include<iostream>
using namespace std;

class mother
{
	 public:
	 	void display()
	 	{
	 		cout<<"hello I am mother...."<<endl;	
		}
};
class daughter:public mother
{
	public:
		void display()
		{
			cout<<"hello I am daughter...."<<endl;
		}
};
int main()
{
	daughter d1;
	
	d1.daughter::display();
	d1.mother::display();
	return 0;
	
}
