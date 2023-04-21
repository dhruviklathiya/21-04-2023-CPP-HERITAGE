#include<iostream>
using namespace std;
class animal {
	private:
		char name[20]="LION";
		int animal_age = 9;
	public:
	void set_value(){
		cout<<name<<endl;
		cout<<animal_age;
	}
};
class Zebra :public animal{
	public:
		void set_value(){
		cout<<endl<<"THIS IS FROM ZEBRA CLASS"<<endl<<endl;
	}
};
class Dolphin :public animal{
	public:
		void set_value(){
		cout<<endl<<"THIS IS FROM DOLPHIN CLASS";
	}
};
int main(){
       Zebra obj;
       Dolphin obj1;
       obj.animal::set_value();
       obj.set_value();
       obj1.animal::set_value();
       obj1.set_value();
	return 0;
}