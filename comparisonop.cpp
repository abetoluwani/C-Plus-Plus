#include <iostream>
#include<string>

using namespace std;


int main(){

    bool test = 1 < 2;
    if (test == 1)
    {
        cout << "True";
    }
    else{
        cout << "False";
    }
    
    bool tes = 1 > 2;
    if (tes == 1)
    {
        cout << ",True";
    }
    else{
        cout << ",False";
    }

    bool equal = 2 == 2;
    if (equal == 1)
    {
        cout << ",True";
    }
    else{
        cout << ",False";
    }
    
    // comparing strings
    bool str ="hello" == "damn"; 
    if (str == 1)
    {
        cout << ",True";
    }
    else{
        cout << ",False";
    }
    
    return 0;
}
