#include <iostream>
#include <iomanip>
using namespace std;

void showBalance (double balance);
double deposit ();
double withdraw(double balance);

int main(){
        double balance = 0;
        int choice = 0;
        
    do {
        cout << "\t\t\t ++++++++++++++++ \t\t\t\n";
        cout << "\t\t\t\t Victoria Bank \t\t\t\n";
        cout << "\t\t\t ++++++++++++++++ \t\t\t\n";
        cout << "1. Show Balance \n";
        cout << "2. Deposit Balance \n";
        cout << "3. Withdraw Balance \n";
        cout << "4. Exit \n\n";
        cout << "Your Choice: ";
        cin >> choice;

        cin .clear();
        fflush(stdin);


        switch (choice){
            case 1: showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thanks For Visiting \n";
                break;
            default :
            cout << "Invalid Number";
                break;
        }
    }while(choice != 4 );


    return 0;
}

void showBalance (double balance){
    cout << "Your Balance is: $"<< setprecision(2)<< fixed << balance << "\n";
    //  setprecision  and fixed with the header file #include <iomanip>
    //  is used to display the decimal of a number 
}   
double deposit (){
    double amount = 0;
    cout << "Enter Amount To Be Deposited: ";
    cin >> amount;

    if (amount > 0 ){
        return amount;
    }
    else{
        cout << "That's Not A Valid Amount";
    }
}

double withdraw(double balance){
    double amounnt;
     
    cout << "Enter Amount To Be Withdrawn : ";
    cin >> amounnt;

    if (balance < amounnt){
        cout << "Insufficient Funds \n";
        return 0;
    }
    else if (amounnt < 0){
        cout << "That is not a valid amount \n";
        return 0;
    }
    else {
        return amounnt;
    }
    
}
