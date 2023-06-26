#include <iostream>
using namespace std;

int main(){
    // type conversion is the conversion of one data type to another

    cout<< (char)100; // this is known as explict conversion

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100; // this is known as explict conversion

    cout << score << "%";

    return 0;
}