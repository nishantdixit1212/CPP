#include<iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int n) {
    for(int i = 2; i <= n; i++) {
        if(isPrime(i))
            cout << i << " ";
    }
}

int main() {
    printPrimes(7);
    return 0;
}