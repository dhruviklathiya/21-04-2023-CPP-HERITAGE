#include <iostream>
#include <string.h>
using namespace std;

class a{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
	void setter(){
		cout<<"enter employee id :  ";
		cin>>id;
		cout<<"enter employee name :  ";
		cin>>name;
		cout<<"enter employee role :  ";
		cin>>role;
	}
};
class b:public a{

	public:
		void setter(){
		cout<<"enter employee salary :  ";
		cin>>salary;
		cout<<"enter employee experience :  ";
		cin>>experience;
	}
};
class c:public b{
	public:
		void setter(){
		cout<<"enter employee comp_name :  ";
		cin>>comp_name;
		cout<<"enter employee address :  ";
		cin>>address;
		}
		void getter(){
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee role : "<<role;
		cout<<endl<<"employee salary : "<<salary<<endl;
		}
};
class d:public c{
	public:
	void setter(){
		cout<<"enter employee email :  ";
		cin>>email;
		cout<<"enter employee contact :  ";
		cin>>contact;
	}
	void getter(){
		cout<<"employee id : "<<id;
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee role : "<<role;
		cout<<endl<<"employee salary : "<<salary;
		cout<<endl<<"employee experience : "<<experience;
		cout<<endl<<"employee comp_name : "<<comp_name;
		cout<<endl<<"employee address : "<<address;
		cout<<endl<<"employee email : "<<email;
		cout<<endl<<"employee contact : "<<contact<<endl;
	}
};
int main(){

	d obj;
	obj.a::setter();
	obj.b::setter();
	obj.c::setter();
	obj.d::setter();
	obj.c::getter();
	obj.getter();


	return 0;
}