#include <iostream>
#include <tuple>
#include <string>
using namespace std;


void PrintStudent(const tuple<double, char, string>& student) {
    cout << "GPA: " << get<0>(student) 
         << ", Grade: " << get<1>(student) 
         << ", Name: " << get<2>(student) << endl;
}

int main() {
    tuple<double, char, string> student1;
    using Student = tuple<double, char, string>;
    Student student2{1.4, 'A', "Emanuel"};


    PrintStudent(student2);

 
    cout << get<2>(student2) << endl;

    // C++17 STRUCTURED BINDING:
    auto [gpa, grade, name] = make_tuple(4.4, 'B', "");
    //cout << "GPA: " << gpa << ", Grade: " << grade << ", Name: " << name << endl;

    return 0;
}
