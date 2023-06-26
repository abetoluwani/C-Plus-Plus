#include<iostream>
#include <string>

using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Welcome to our website";
    }
    else if (age <=0){
        cout << " Invalid Age";
    }
    else{
        cout<< "Your age is restricted from this content";
    }
    return 0;
}