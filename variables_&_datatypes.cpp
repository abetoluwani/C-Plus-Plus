#include <iostream>


int main(){
    int line = 100; // whole number
    double gpa = 23.54; // for number with decimal
    double sum;
    sum = line + gpa;

    //char grade = 'A'; // can only store one character

    // bool student = false; // it has only states True or False

    std::string name = "Damian"; // a string is an object that represents a sequence of text 

    std::cout << "Hello World\n";
    std::cout << "" << line << "\n"; // this is weird ngl but it is what it is
    std::cout << "Hi how are you\n";
    std::cout << sum << "\n";
    std::cout << name << "\n";
    std::cout << "You are " << gpa << " years old";

    return 0;
}