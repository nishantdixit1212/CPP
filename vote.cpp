#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "enter the age: ";
    cin >> age;
    if(age >= 18){
        cout << "can a vote" << endl;
        cout << "can a drive" << endl;
    }
    else{
        cout << "they can not a vote" << endl;
        cout << "they can not a drive" << endl;
    }
    return 0;
}