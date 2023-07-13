#include <iostream>
using namespace std;


int main(){
    // fill helps to fill a range of elements with a specified value

    const int SIZE = 14 ;
    string foods[10];
    string sport [SIZE];


    fill(foods, foods + 10,"pizza");

    fill (sport,sport+(SIZE/2),"football");
    fill(sport+(SIZE/2),sport + SIZE,"baseball");

    for (string food : foods){
        cout << food << "\n";
    }

    for (string spor : sport){ 
        cout << spor << "\n";
    }
    

    return 0;
}