#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int choice = (rand()% 5) +1;

    switch (choice)
    {
    case 1:
        cout  <<"You've Won A I-ferg T-shirt ";
        break;
    case 2:
        cout << "You've Won A Free Lunch At Dominos";
        break;
    case 3:
        cout << "You've Won A Ticket to a Manchester City Game";
        break;
    case 4:
        cout << "You've Won An Iphone";
        break;
    case 5:
        cout << "You've Won A Car";
        break;
    
    }

    return 0;
}