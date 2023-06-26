#include <iostream>
#include <string>
using namespace std;

int main(){
    int score;
    cout << "Enter your score: ";
    cin >> score;

    score >= 70 ? cout << "You Passed" : cout <<"You Failed";

    return 0;
}