#include <iostream>
using namespace std;

void printstring(char arr[]);

int main (){
    char firstname[] = "Nishant";
    char lastname[] = "Dixit";

    printstring(firstname);
    printstring(lastname);
    return 0;

}

void printstring(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        cout << arr[i] ; 
    }
    cout << endl;
}


