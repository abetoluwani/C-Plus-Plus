#include <iostream>
#include <ctime>

using namespace std;

int main(){

    // arrays can be of the same data type

    string cars []= {"Lambo","Mustang","C50","Bmw","Camry"};
    double price [] = {250000,75000,15000,20000,5000};

    cout << "car: " << cars [0] << " Price: "<< price [0] <<"\n";
    cout << "car: " << cars [1] << " Price: "<< price [1] <<"\n";
    cout << "car: " << cars [2] << " Price: "<< price [2] <<"\n";
    cout << "car: " << cars [3] << " Price: "<< price [3] <<"\n";
    cout << "car: " << cars [4] << " Price: "<< price [4] <<"\n";

    return 0;
}