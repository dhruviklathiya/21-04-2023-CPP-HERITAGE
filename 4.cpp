#include <iostream>
#include <string.h>
using namespace std;
class abc{
    public:
	int num;
    void geta(){
        cout << "Enter  number: ";
        cin >> num;
    }
};
class Square : public abc {
    public:
	int sqr;
    void getb(){ 
        sqr = num * num;
     cout<<"square of the number is : "<<sqr<<endl;
    }
};
class Cube : public abc {
    public:
	int cube;
    void getc(){
        cube = num * num * num;
      cout<<"cube of the number is  : "<<cube<<endl;
    }
};
int main(){
    Square obj1;
    Cube obj2;
    obj1.geta();
    obj1.getb();
    obj2.geta();
    obj2.getc();
    return 0;
}