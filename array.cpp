#include <iostream>

using namespace std;

int main()
{

    // arrays can be of the same data type

    string cars[] = {"Lambo", "Mustang", "C50", "Bmw", "Camry"};
    double price[] = {250000, 75000, 15000, 20000, 5000};

    cout << "car: " << cars[0] << " Price: " << price[0] << "\n";
    cout << "car: " << cars[1] << " Price: " << price[1] << "\n";
    cout << "car: " << cars[2] << " Price: " << price[2] << "\n";
    cout << "car: " << cars[3] << " Price: " << price[3] << "\n";
    cout << "car: " << cars[4] << " Price: " << price[4] << "\n";

    // iterate over an array

    string students[] = {"David", "Faith", "Gustavo", "Nisa"};

    for (int i = 0; i < sizeof(students) / sizeof(string); i++)
    {
        cout << students[i] << "\n";
    }

    char game[] = {'r', 'p', 's'};

    // the expression sizeof(game)/sizeof(char) would give us the number of element present in the array

    for (int i = 0; i < sizeof(game) / sizeof(char); i++)
    {
        cout << students[i] << "\n";
    }
    return 0;
}