#include <iostream>
#include <string.h>
using namespace std;
class A{
	public:
		int emp_id;
		int emp_salary;
		char emp_name[20];
		char emp_role[20];
        int emp_experience;
		char emp_comp_name[20];
		char emp_address[20];
	void display(){
		cout<<"Enter employee id :  ";
		cin>>emp_id;
		cout<<"Enter employee name :  ";
		cin>>emp_name;
		cout<<"Enter employee role :  ";
		cin>>emp_role;
		cout<<"Enter employee salary :  ";
		cin>>emp_salary;
        cout<<"Enter employee experience :  ";
		cin>>emp_experience;
		cout<<"Enter employee comp_name :  ";
		cin>>emp_comp_name;
		cout<<"Enter employee address :  ";
		cin>>emp_address;
        cout<<endl;
	}
};
class B{
	public:
		char emp_email[20];
		int emp_contact;
		void display(){
		cout<<"Enter employee email :  ";
		cin>>emp_email;
		cout<<"Enter employee contact :  ";
		cin>>emp_contact;
		cout<<endl;
	}
};
class C:public A,public B{
        public:
        void showinfo()
        {
        cout<<"Employee id : "<<emp_id<<endl;
		cout<<"Employee name : "<<emp_name<<endl;
		cout<<"Employee role in comapany : "<<emp_role<<endl;
		cout<<"Employee salary is : "<<emp_salary<<endl;
        cout<<"Employee's experience : "<<emp_experience<<endl;
		cout<<"Employee company name is : "<<emp_comp_name<<endl;
		cout<<"Employee's address : "<<emp_address<<endl;
		cout<<"Employee's email : "<<emp_email<<endl;
		cout<<"Employee's contact : "<<emp_contact<<endl;
        }
};
int main(){
	C obj;
	obj.A::display();
	obj.B::display();
    obj.showinfo();
	return 0;
}
