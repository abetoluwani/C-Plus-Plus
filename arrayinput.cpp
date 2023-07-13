#include <iostream>
using namespace std;

int  main(){
    string food[10];
    int size = sizeof(food)/sizeof(food[0]);
    string temp;

// Loop asking and validating the input and the exit function

    for(int i = 0; i < size ; i++ ){
        cout << "Enter a food you like or 'q' to quit # " << i + 1 << ":";
        getline(cin,temp);

        if (temp == "q"){
            break;
        }

        else{
        // assigning the loop to the temp variable
        food[i] = temp; 
        }
    } 

    
    cout << "You like the following food:\n";
    // This for loop would remove empty input from being printed out
    for (int i = 0 ; !food[i].empty(); i++){

        
        cout << food[i] << '\n';   
    }

    return 0;
}