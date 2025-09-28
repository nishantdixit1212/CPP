#include <iostream>
#include <string>
using namespace std;

class Teacher {
public: 
    Teacher (string n, string d, string s){
        name = n;
        dept = d;
        subject = s;

    
    }

    string name;
    string dept;
    string subject;

 void getinfo(){
        cout << name<< endl;
        cout << dept << endl;
        cout << subject << endl;
    }
};
int main (){
    Teacher t1("nishant", "computer scince" , "cpp");
    t1.getinfo();

    return 0;  

}