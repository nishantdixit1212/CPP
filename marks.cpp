#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "enter the marks: ";
    cin >> marks;
    
    if(marks >= 80 && marks <= 100){
        cout << " A grade " << endl;
    }
    else if(marks >= 60 && marks < 80 ){
        cout << " B grade " << endl;
    }
    else{
        cout << "c grade ";
    }
    return 0;
}