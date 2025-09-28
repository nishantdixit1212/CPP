#include <iostream>
#include <string>
using namespace std;

class Teacher{
 private:
     double salary;

public:
     string name;
     string dept;
     string subject;

  
void setsalary(double s){
     salary = s;
}
double getsalary() {
    return salary;
}
};

int main(){
    Teacher t1;
    t1.name = "Nishant";
    t1.subject = "c++";
    t1.dept = "computer science";
    t1.setsalary(25000);
  

    cout <<" NAME = " << t1.name << endl;
    cout << "dept = "<< t1.dept << endl;
    cout << "subject = " << t1.subject << endl;
    cout << "salary = " << t1.getsalary() << endl;
    return 0;
}