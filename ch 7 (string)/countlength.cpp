// ...existing code...
#include <iostream>
#include <string>
using namespace std;

int countlength(const string& s);

int main(){
    string name;
    getline(cin, name);
    cout << "length is : " << countlength(name);
    return 0;
}

int countlength(const string& s){
    return (int)s.size(); // no -1
}
// ...existing code...