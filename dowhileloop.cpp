#include <iostream>
#include <string>

using namespace std;

int main(){
    int number;

    do{
        cout << "Enter a Number: ";
        cin >> number;
        
    }while (number < 0);

    cout << number;
    
    return 0;
}