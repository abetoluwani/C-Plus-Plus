#include <iostream>
#include <ctime>

using namespace std;

int main (){
    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    cout << "++++++ Number Guessing Game +++++++ \n";
    do {
        cout << "Guess the number between 1 - 100: ";
        cin >> guess;
        
        tries ++;
        
        if (guess > num){
            cout << "Too high\n";
        }

        else if (guess < num){
            cout << "Too low\n";
        }

        else{
            cout << "Correct \n";
            cout << "You got it after " << tries << " tries";
        }

    }while (guess != num);

    return 0;
}