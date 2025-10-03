#include <iostream>
using namespace std;
int main (){

    int a=4;
    // post increament
    cout << a++ << endl ; //4
    cout << "a = " << a << endl; //5
    
    // pre increament
    int b=4;
    cout << ++b << endl; //5
    cout << "b = " << b << endl; //5

    // post decreament
    int c=4;
    cout << c-- << endl; // 4
    cout << "c = "<<c << endl; // 3

    //pre decreament
    int d=4;
    cout << --d << endl; // 3
    cout << "d = "<<d << endl; // 3
    return 0;
}