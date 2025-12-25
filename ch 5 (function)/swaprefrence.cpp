#include <iostream>
using namespace std;

void _swap(int *a , int *b);


int main (){
    int x = 3 , y = 5;
    _swap(&x,&y);
    cout << "x = "<< x << "   &  " ;
    cout << "y = "<< y;
    return 0; 
}


//call by refernce
// call by reference
    void _swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
     

}
