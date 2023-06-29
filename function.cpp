#include <iostream> //predirective directory
using namespace std;

void happy(string name,int age); // function prototypes
string concatstr(string str1, string str2);


int main(){
    string name = "Raymond";
    int age = 21;

    string name1 = "Hey ";
    string nal = "Deniz \n";
    
    cout << concatstr( name1,nal);

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


string concatstr(string str1, string str2){
    return str1+str2;
}