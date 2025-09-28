#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    double balance;
    string password;

public:
     string accountid;
     string username;

void setbalance(double b){
    balance = b;
}
double getbalance(){
    return balance;
}

void setpassword(string p){
    password = p;
}

string getpassword(){
    return password;
}
};

int main(){
    Account a1;
    a1.accountid = "9719492213";
    a1.username = "abcdefghijkl";
    a1.setbalance(35000);
    a1.setpassword("123445");
    

    cout<< a1.accountid << endl;
    cout<< a1.getbalance();
    return 0;
}