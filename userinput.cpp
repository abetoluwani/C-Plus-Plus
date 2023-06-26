#include <iostream>
#include <string>
using namespace std; 

int main(){

    // cout << (insertion operator )
    // cin >> (extraction operator)
    string name;
    int age;

    cout << "Type your full name: ";
    getline(cin, name); // to store a string after a white space

    cout << "What is your name?: "; // this is for character output
    cin >> name; //this is to store character input

    cout <<"Age: ";
    cin >> age;

    cout << cin.fail() << '\n'; // to check if the input failed
    cin.clear();// This would clear the error from the console but would would not remove the string typed
    cin.ignore(1000, '\n'); // this would clear the string from the console so that you can type a new number

    
    // print the user's name
    cout << "Hello " << name  << " you are " << age << " years old \n";

    return 0;
}