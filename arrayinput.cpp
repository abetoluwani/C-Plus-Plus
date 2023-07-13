#include <iostream>
using namespace std;

int  main(){
    string food[5];
    int size = sizeof(food)/sizeof(foods[0]);
    string temp;

    for(int i = 0; i < size ; i++ ){
        cout << "Enter a food you like or 'q' to quit # " << i + 1;
        getline(cin,temp);

        if (temp == "q"){
            break;
        }
    } 

    else{
        // assigning the loop to the temp variable
        food[i] = temp; 
    }

    cout << "You like the following food:\n";

    


    return 0;
}