#include<iostream>
using namespace std;
class A{
public:
int emp_id;
char emp_name[40];
char emp_role  [40];
int  emp_salary ;
int  emp_exp ;
char emp_comp_name[40];
char emp_address[40];
char emp_email[40];
int emp_contact;
void setter(){
    cout<<"Enter employee id: ";
    cin>>emp_id;
    cout<<"Enter employee name: ";
    cin>>emp_name;
    cout<<"Enter employee role in comapany: ";
    cin>>emp_comp_name;
}
};
class B : public A{
    public:
    void setter(){
        cout<<"Enter employee salary: ";
        cin>>emp_salary;
        cout<<"Enter employee experience in years: ";
        cin>>emp_exp;
    }
};
class C : public B{
    public:
    void setter(){
        cout<<"Enter employee company name: ";
        cin>>emp_comp_name;
        cout<<"Enter employee address: ";
        cin>>emp_address;
    }
    void getter(){
        // name role salary 
        cout<<"Employee's name is:"<<emp_name<<endl;   
        cout<<"Employee's role in comapany is:"<<emp_role<<endl;   
        cout<<"Employee's salary is:"<<emp_salary<<endl;   
    }
};
class D : public C{
    public:
    void setter(){
        cout<<"Enter employee email: ";
        cin>>emp_email;
        cout<<"Enter employee contact: ";
        cin>>emp_contact;
    }
    void getter(){
        // name role salary 
        cout<<"Employee's id is:"<<emp_id<<endl;   
        cout<<"Employee's name is:"<<emp_name<<endl;   
        cout<<"Employee's role in comapany is:"<<emp_role<<endl;   
        cout<<"Employee's salary is:"<<emp_salary<<endl;   
        cout<<"Employee's expirence in years:"<<emp_exp<<endl;   
        cout<<"Employee's company name is:"<<emp_comp_name<<endl;   
        cout<<"Employee's address is:"<<emp_address<<endl;   
        cout<<"Employee's email is:"<<emp_email<<endl;   
        cout<<"Employee's contact is:"<<emp_contact<<endl;   
    }
};
int main (){
    D obj;
    obj.A::setter();
    obj.B::setter();
    obj.C::setter();
    obj.D::setter();
    obj.C::getter();
    obj.D::getter();
	return 0;
} 

// WAY:2
// #include <iostream>
// #include <string.h>
// using namespace std;

// class a{
// 	public:
// 		int id;
// 		char name[100];
// 		char role[100];
// 		int salary;
// 		int experience;
// 		char comp_name[100];
// 		char address[100];
// 		char email[100];
// 		int contact;
// 	void setter(){
// 		cout<<"enter employee id :  ";
// 		cin>>id;
// 		cout<<"enter employee name :  ";
// 		cin>>name;
// 		cout<<"enter employee role :  ";
// 		cin>>role;
// 	}
// };
// class b:public a{

// 	public:
// 		void setter(){
// 		cout<<"enter employee salary :  ";
// 		cin>>salary;
// 		cout<<"enter employee experience :  ";
// 		cin>>experience;
// 	}
// };
// class c:public b{
// 	public:
// 		void setter(){
// 		cout<<"enter employee comp_name :  ";
// 		cin>>comp_name;
// 		cout<<"enter employee address :  ";
// 		cin>>address;
// 		}
// 		void getter(){
// 		cout<<endl<<"employee name : "<<name;
// 		cout<<endl<<"employee role : "<<role;
// 		cout<<endl<<"employee salary : "<<salary<<endl;
// 		}
// };
// class d:public c{
// 	public:
// 	void setter(){
// 		cout<<"enter employee email :  ";
// 		cin>>email;
// 		cout<<"enter employee contact :  ";
// 		cin>>contact;
// 	}
// 	void getter(){
// 		cout<<"employee id : "<<id;
// 		cout<<endl<<"employee name : "<<name;
// 		cout<<endl<<"employee role : "<<role;
// 		cout<<endl<<"employee salary : "<<salary;
// 		cout<<endl<<"employee experience : "<<experience;
// 		cout<<endl<<"employee comp_name : "<<comp_name;
// 		cout<<endl<<"employee address : "<<address;
// 		cout<<endl<<"employee email : "<<email;
// 		cout<<endl<<"employee contact : "<<contact<<endl;
// 	}
// };
// int main(){

// 	d obj;
// 	obj.a::setter();
// 	obj.b::setter();
// 	obj.c::setter();
// 	obj.d::setter();
// 	obj.c::getter();
// 	obj.getter();


// 	return 0;
// }
