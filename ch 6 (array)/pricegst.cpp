#include <iostream>
#include <iomanip>
using namespace std ;

int main (){
    float price[3];
    cout << "enter the first price ";
    cin>> price[0];
    cout << "enter the second price ";
    cin>> price[1];
    cout << "enter the third price ";
    cin>> price[2];


    cout << fixed << setprecision(6);
    cout << "first price is " << price[0] + (.18 * price[0]) << endl;
    cout << "second price is " << price[1] + (.18 * price[1]) << endl;
    cout << "third price is " << price[2] + (.18 * price[2]) << endl;

    return 0;
    
}