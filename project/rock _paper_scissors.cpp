#include <iostream>
#include <string>
#include <cctype>
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

    return 0;
}
void showchoice(char choice){
    switch (choice)
    {
    case 'r':
        cout << "Rock";
        break;
    case 'p':
        cout << "Paper";
        break;
    case 's':
        cout << "Scissors";
        break;
     }

}
void winner( char player , char computer){

}