#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    double a, b;
    string s;
    ifstream in("test_col.txt", ios_base::in);
    while(in>>i>>a>>s>>b){
        cout << i << ", " << a << ", " << s << ", " << b << endl;

    }
    return (0);
}