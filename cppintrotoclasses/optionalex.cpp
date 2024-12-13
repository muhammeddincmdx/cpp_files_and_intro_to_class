#include <iostream>
using namespace std;
#include <optional>

optional<string> StringFactory(bool create){
    if (create){
        return "Cold and gray Chicaho morning";
    }
    return {};
}

int main(){
    cout << StringFactory(true).value() << "\n";
    cout << StringFactory(false).value_or(":(") << "\n";
    
}