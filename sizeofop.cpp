#include <iostream>
using namespace std;

// it determine the size in bytes of a variable,data type,class, objects etc

int main(){

    double gpa = 2.5;
    string name = "Damian";
    char grade = 'A';
    int num = 222;
    bool software = true;

    cout << sizeof(gpa)<< " bytes"<< endl;
    cout << sizeof(name)<< " bytes"<< endl;
    cout << sizeof(grade)<< " bytes"<< endl;
    cout << sizeof(num)<< " bytes"<< endl;
    cout << sizeof(software)<< " bytes"<< endl;

    return 0;
}
