#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;

    // // the if statement would not forcw the user to enter a name but a while loop would
    // if (name.empty()){
    //     cout  << "Enter your name:"; 
    //     getline(cin, name);
    // }

    // cout << "Hello "<<name;

    while (name.empty())
    {
        cout << "Enter Your Name: ";
        getline(cin, name);
    }
    cout << "\nHello " <<name;

    return 0;
}