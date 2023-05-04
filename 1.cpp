#include<iostream>
using namespace std;
class mother{
    public:
    void display(){
        cout<<"This is mother class"<<endl;
    }
};
class daugther : public mother{
    public:
    void display(){
        cout<<"This is daughter class"<<endl;
    }
};
int main (){
    daugther obj1;
    obj1.display();         //  CALLING DUGHTER CLASS
    obj1.mother::display(); //  CALLING SAME CLASS NAME BY SCOPE RESOLUTION OPERATOR
    return 0;
}

// Way 2:
// #include<iostream>
// using namespace std;
// class mother {
// 	public:
// 	void display(){
// 		cout<<"MOTHER CLASS";
// 	}
// };
// class daugther : public mother{
// 	public:
// 		void display(){
// 		cout<<"DAUGHTER CLASS";
// 	}
// };
// int main(){
// 	daugther obj;
// 	obj.mother::display(); // :: scope resolution operator
// 	cout<<endl;
// 	obj.display();
// 	return 0;
// }
