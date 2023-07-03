#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL)); // for indicating the range of numbers and also using the current time to indicate does numbers

    int num   = (rand()% 6) + 1; // the % 6 is indicating that you only need between 1 - 6 but because it would display a 0 (zero) we would have to add one to it to remove the zero from the random numbers
    int num1  = (rand()% 6) + 1;
    int num2  = (rand()% 20) + 1;
    int num3  = (rand()% 20) + 1;

    cout << num <<"\n";
    cout << num1 <<"\n";
    cout <<num2<<"\n";
    cout << num3 <<"\n";
    return 0;
}