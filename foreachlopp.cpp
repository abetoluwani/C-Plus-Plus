#include <iostream>
using namespace std;

int main(){

     // foreach loop
    int score[] = {90, 85, 80, 78, 95};

    for (int score : score)
    {
        cout << score << "\n";
    }

    char pick[] = {'Y', 'N'};

    for (char pick : pick)
    {
        cout << pick << "\n";
    }

    char grade[] = {'A','B','C'};

    for (char grade : grade)
    {
        cout << grade << "\n";
    }
    
    return 0;
}