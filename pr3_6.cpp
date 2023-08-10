#include<iostream>
using namespace std;

class a
{
	public:
		int id,salary,experience,contact;
		char Name[100],role[100],com_name[100],address[100],email[100];
		setdata()
		{
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<endl;
			cout<<"role: "<<endl;
		}
};
class b:public a
{
	public:
	setdata()
	{
			cout<<"salary: "<<salary<<endl;
			cout<<"experience: "<<experience<<endl;	
	}	
};
class c:public b
{
	public:
		getdata()
		{
			cout<<"Name: ";
			cin>>Name;
			
			cout<<"rol: ";
			cin>>role;
			
			cout<<"salary";
			cin>>salary;			
		}
	setdata()
	{
		cout<<"com_name: "<<com_name<<endl;
		cout<<"address: "<<address<<endl;
	}
};
class d:public c
{
	public:
		getdata()
		{
			cout<<"id: ";
			cin>>id;
			
			cout<<"Name: ";
			cin>>Name;
			
			cout<<"role: ";
			cin>>role;
			
			cout<<"salary";
			cin>>salary;
			
			cout<<"experience: ";
			cin>>experience;
			
			cout<<"compny name: ";
			cin>>com_name;
			
			cout<<"address: ";
			cin>>address;
			
			cout<<"email: ";
			cin>>email;
			
			cout<<"contact: ";
			cin>>contact;
		}
		setdata()
		{
			cout<<"email: "<<email<<endl;
			cout<<"contact: "<<contact<<endl;
		}
};

int main()
{
	d d1;
	
	d1.getdata();
	cout<<"***************************"<<endl;
	d1.a::setdata();
	d1.b::setdata();
	d1.c::setdata();
	d1.setdata();
	
	return 0; 
}
