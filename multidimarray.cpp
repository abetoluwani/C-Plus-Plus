#include <iostream>
using namespace std;

int main(){

    // Multidimensional Array

    string cars [][3] ={ {"Mustang","Escape","F-150"},
                        {"Toyato","Silverdo","Chevrollete"},
                        {"BMW","Lamobo","Ferrari"}
    };

    cout << cars[0][0] << " ";
    cout << cars[0][1] << "\n";
    cout << cars[1][1] << " ";
    cout << cars[1][2] << "\n";
    cout << cars[2][0] << " ";
    cout << cars[2][1] << " ";
    cout << cars[2][2] << "\n";

    return 0;
}