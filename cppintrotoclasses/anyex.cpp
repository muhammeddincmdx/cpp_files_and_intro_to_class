#include <iostream>
using namespace std;
#include <any>
int main(){
    any a; // any type

    a = 1; // int
    cout << any_cast<int>(a) << endl;

    a = 3.14; // double;
    cout << any_cast<double>(a) << endl;
    a = true; // bool;
    cout << boolalpha << any_cast<bool>(a) << endl;
    
}