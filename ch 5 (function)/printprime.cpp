#include<iostream>
using namespace std;

int primeN(int n){
    for (int i=1; i<=n; i++){
        if(n % 2 != 0){
            cout << i;
        }
        else{
            cout << "not prime";
        }
    }
    return i;
}


int main() {
cout << i <<primeN(7);

    return 0;
}