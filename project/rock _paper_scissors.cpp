#include <iostream>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;

char userchoice();
char computerchoice();
void showchoice(char choice);
void winner( char player , char computer);

int main (){

    char player;
    char computer;

    player = userchoice();
    cout << "Your choice was "; 
    showchoice(player);

    computer = computerchoice();
    cout << "The computer's choice: ";
    showchoice(computer);

    

    winner(player , computer);
    return 0;
}


char userchoice(){
    char player;

    do {
        system("clear"); 
        cout << "Rock Paper Scissors Game ! \n";

        cout << "'r' for rock \n";
        cout << "'p' for rock \n";
        cout << "'s' for rock \n";
        cout << "Your Choice: ";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char computerchoice(){

    srand(time(0));
    int num = (rand()% 3 ) + 1;

    switch (num)
    {
    case 1:
        return'p';
        break;
    case 2:
        return'r';
        break;
    case 3:
        return's';
        break;
    }

    return 0;
}
void showchoice(char choice){
    switch (choice)
    {
    case 'r':
        cout << "Rock \n";
        break;
    case 'p':
        cout << "Paper \n";
        break;
    case 's':
        cout << "Scissors \n";
        break;
     }

}
void winner( char player , char computer){
    switch (player)
    {
    case 'r':
        if (computer == 'r'){
            cout << "It's a tie between the between you and the computer"; 
        }
        else if(computer == 'p'){
            cout << "The computer wins \n Try Better Next Time :)";
        }
        else{
            cout << "You win";
        }
        break;

    case 'p':
        if (computer == 'p'){
            cout << "It's a tie between the between you and the computer"; 
        }
        else if(computer == 's'){
            cout << "The computer wins \n Try Better Next Time :)";
        }
        else{
            cout << "You win";
        }
        break;

    case 's':
        if (computer == 's'){
            cout << "It's a tie between the between you and the computer"; 
        }
        else if(computer == 'r'){
            cout << "The computer wins \n Try Better Next Time :)";
        }
        else{
            cout << "You win";
        }
        break;
    
    default:
        break;
    }
}