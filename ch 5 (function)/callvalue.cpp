#include<iostream>
using namespace std;

void square(int n);

int main(){
    int number = 4;
    square(number);
    cout << "square is number: " << number ;
    return 0;

}

void square(int n){
    n = n * n;
    cout <<" square is: " << n << endl;
    
}