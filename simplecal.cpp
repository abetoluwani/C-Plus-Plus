#include<iostream>
#include<cmath>

using namespace std;

int main(){

    double num1, num2, maxx;
    double square;

    cout << "Enter a Number: ";
    cin >> num1;
    cout << "Enter a 2nd Number: ";
    cin >> num2;

    // sum
    int sum = num1 + num2;
    cout << "The Sum is: "<< sum;

    // biggest number 
    maxx = max(num1,num2);
    cout << "\nThe maximum number is " << maxx;

    // square root
    square = sqrt(sum);
    cout << "\nThe square root is " << square;

    return 0;
}
