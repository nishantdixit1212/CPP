// convert to binary to decimal
#include<iostream>
using namespace std;

int decTobinary( int decN){
    int ans = 0 , pow = 1;

    while (decN > 0){
        int rem = decN % 2;
        decN /= 2;

        ans += (rem * pow);
        pow = pow*10;

    }
    return ans;
}



int main() {

int decN = 50;
cout << decTobinary(decN);
    return 0;
}