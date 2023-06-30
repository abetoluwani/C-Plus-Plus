#include <iostream>
#include<string>
using namespace std;
// function name plus parameter is known as a function signatures

void pizza(); // funtion prototype
void pizza(string topping1);
void pizza(string topping1, string topping2);

int main(){
    int choice;
    string first;
    string second;

    cout << "++++++++++ Welcome TO Ray Resturant +++++++++++ \n";
    cout << "1. Regular Pizza \n";
    cout << "2. 1-Topping Pizza \n";
    cout << "3. 2-Toppings Pizza \n";
    cout << "\nEnter your choice: "; 
    cin >> choice;

    switch (choice)
    {
    case 1:
        pizza();
        break;
    case 2:
        cout << "Choose One Topping ~ Tomato/Chicken/Pepperoni: ";
        cin >> first;
        pizza(first);
        break;
    case 3:
        cout << "Choose Your First Toppings~ Sausage & Kale/Chicken/Pepperoni/BBQ Meatlovers: ";
        // cin.ignore(); this can be used to remove the whitespace when you askinf for a user input
        getline(cin >> ws, first); // another method used to remove the whitespace when you ask for a user input (recommended)
    

        cout << "Choose Your Second Toppings~ Sausage & Kale/Chicken/Pepperoni/BBQ Meatlovers: ";
        // cin.ignore();
        getline(cin >> ws, second);

        pizza(first,second);
        break;
    
    default:
        cout << "Invalid Selection";
        break;
    }

    return 0;
}

void pizza(){
    cout << "Here is your Regular pizza \n";
}

void pizza(string topping1){
    cout << "Here is your "<<topping1<<" pizza \n";
}

void pizza(string topping1, string topping2){
    cout << "Here is your "<<topping1+" and "+topping2<<" pizza \n";
}
