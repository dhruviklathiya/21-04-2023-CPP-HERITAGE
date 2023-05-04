#include<iostream>
using namespace std;
class animal {
	private:
		char name[20]="LEO";
		int leo_age = 9;
	public:
	void set_value(){
		cout<<"Parent class ANIMAL==>"<<endl;
        cout<<"This is LION with name: "<<name<<" and age of: "<<leo_age<<endl;
	}
};
class Zebra :public animal{
	public:
	char zeb_name[20] = "Whitey zebra";
	int zeb_age = 5;
		void set_value(){
		cout<<"Child class ZEBRA==>"<<endl;
		cout<<"Hello this is zebra, with name of:"<<zeb_name<<"and age of:"<<zeb_age<<endl;
	}
};
class Dolphin :public animal{
	public:
        char dol_name[20] = "Wingy";
        int dol_age = 7;
	void set_value(){
		cout<<"Child class DOLPHIN==>"<<endl;
		cout<<"Hello this is Dolphin, with name: "<<dol_name<<"and age of:"<<dol_age<<endl;
    }
};
int main(){
       Zebra obj;
       Dolphin obj1;
       obj.animal::set_value();
       obj.set_value();
       obj1.set_value();
	return 0;
}
