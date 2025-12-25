#include <iostream>
using namespace std;

void swap(int a , int b);


int main(){
    int x = 3 , y = 5;
    swap(x,y);
    cout << "x = "<< x << "   &  " ;
    cout << "y = "<< y;
    return 0;
}


// call by value
void swap(int a , int b){
    int t = a;
    a = b;
    b = t;
    cout << "a = "<< a  << "   &  ";
    cout << "b = "<< b << endl; 
}


