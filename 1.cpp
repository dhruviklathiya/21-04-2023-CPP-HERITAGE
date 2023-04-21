#include<iostream>
using namespace std;
class mother {
	public:
	void display(){
		cout<<"MOTHER CLASS";
	}
};
class daugther : public mother{
	public:
		void display(){
		cout<<"DAUGHTER CLASS";
	}
};
int main(){
	daugther obj;
	obj.mother::display(); // :: scope resolution operator
	cout<<endl;
	obj.display();
	return 0;
}