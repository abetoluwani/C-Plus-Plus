#include <iostream>
#include<vector>


int main(){

    int students = 20;
    int classes = 54; 
    students+=5;
    classes-=23;

    double divide;
    divide = classes/(double)students; // this is the way data types are assigned in c++ ~ this wouldd return a decimal number
    int add = classes + students;
    int sub = classes - students;
    int multi = classes * students;
    
    std::cout << students << "\n"; 
    std::cout << classes << "\n";
    std::cout << divide << "\n"; 
    std::cout<< add << "\n";
    std::cout<< sub << "\n";
    std::cout<< multi << "\n";

    return 0;
}