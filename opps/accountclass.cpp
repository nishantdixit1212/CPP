#include <iostream>
#include <string>
using namespace std;

// Account class definition
class Account {
private:
    double balance;
    string password;

public:
    string accountid;
    string username;

    // Setter for balance
    void setbalance(double b) {
        balance = b;
    }

    // Getter for balance
    double getbalance() {
        return balance;
    }

    // Setter for password
    void setpassword(string p) {
        password = p;
    }

    // Getter for password (not recommended for real applications)
    string getpassword() {
        return password;
    }
};

int main() {
    // Create an Account object
    Account a1;

    // Set account details
    a1.accountid = "9719492213";
    a1.username = "abcdefghijkl";
    a1.setbalance(35000);
    a1.setpassword("123445");

    // Display account ID and balance
    cout << "Account ID: " << a1.accountid << endl;
    cout << "Balance: " << a1.getbalance() << endl;

    return 0;
}