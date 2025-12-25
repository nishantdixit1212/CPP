#include <iostream>
using namespace std;

void _square(int *n);

int main(){
    int number = 4;
    _square(&number);
    cout << "square by refrence: " << number;
    return 0;

}

void _square(int *n){
    *n = (*n) * (*n);
    cout << "square is: " << *n << endl;
}