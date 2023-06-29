#include <iostream>

using namespace std;

int main(){
    int rows;
    int columns;
    char symbol;

    cout << "How Many Rows: ";
    cin >> rows;

    cout << "How Many Columns: ";
    cin >> columns;

    cout << "Enter a symbol: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            cout << symbol;
        } 
        cout << "\n";
    }
}