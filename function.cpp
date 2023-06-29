#include <iostream> //predirective directory
using namespace std;

void happy(string name,int age); // function prototypes

int main(){
    string name = "Raymond";
    int age = 21;

    happy(name,age);

    return 0;
}

void happy(string name, int age){
    cout << "Happy Birthday To " << name <<"\n";
    cout << "You are " << age << "years old \n";
    cout << "Happy Birthday To " << name <<"\n";
    cout << "You are " << age << "years old \n";
    cout << "Happy Birthday To " << name <<"\n";
    cout << "You are " << age << "years old \n";
    
}