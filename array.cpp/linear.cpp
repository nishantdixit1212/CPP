#include<iostream>
using namespace std;
int linearsearch(int arr[], int size, int target){
for(int i=0; i<size; i++){
if(arr[i] == target){
    return i;
}
}
return -1;

}


int main(){
    int arr[] = {1,5,34,3,2};
    int size = 5;
    int target = 3;
    cout << linearsearch(arr, size, target);
    return 0;
}