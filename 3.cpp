#include <iostream>
#include <string.h>
using namespace std;
class A{
	private:
		int emp_id;
		int emp_salary;
		char emp_name[20];
		char emp_role[20];
	public:
	void display(){
		cout<<"Enter employee id :  ";
		cin>>emp_id;
		cout<<"Enter employee name :  ";
		cin>>emp_name;
		cout<<"Enter employee role :  ";
		cin>>emp_role;
		cout<<"Enter employee salary :  ";
		cin>>emp_salary;
		cout<<endl<<"Employee id : "<<emp_id;
		cout<<endl<<"Employee name : "<<emp_name;
		cout<<endl<<"Employee role in comapany : "<<emp_role;
		cout<<endl<<"Employee salary is : "<<emp_salary<<endl;
	}
};
class B{
	private:
		int emp_experience;
		char emp_comp_name[20];
		char emp_address[20];
		char emp_email[20];
		int emp_contact;
	public:
		void display(){
		cout<<endl<<"Enter employee experience :  ";
		cin>>emp_experience;
		cout<<"Enter employee comp_name :  ";
		cin>>emp_comp_name;
		cout<<"Enter employee address :  ";
		cin>>emp_address;
		cout<<"Enter employee email :  ";
		cin>>emp_email;
		cout<<"Enter employee contact :  ";
		cin>>emp_contact;
		cout<<endl<<"Employee's experience : "<<emp_experience;
		cout<<endl<<"Employee company name is : "<<emp_comp_name;
		cout<<endl<<"Employee's address : "<<emp_address;
		cout<<endl<<"Employee's email : "<<emp_email;
		cout<<endl<<"Employee's contact : "<<emp_contact;
	}
};
class C:public A,public B{
};
int main(){
	C obj;
	obj.A::display();
	obj.B::display();
	return 0;
}