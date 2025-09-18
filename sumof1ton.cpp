#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "enter any number: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
         if  (i==5){
        break;
         }
    }
    cout << "sum of n number: " << sum ;
    return 0;
}