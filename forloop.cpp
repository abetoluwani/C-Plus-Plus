#include <iostream>
#include <string>
#include<math.h>
using namespace std;

int main(){

    for(int i = 5;i >= 1;i--){
        cout << i <<"\n";
    }
    cout << "Happy Summer\n";
    
    // printing from 1-10
    for (int i = 1; i <= 10;i++){
        
        cout << i << "\n";
        
    }
    

    // FInding the sum of the first 10 numbers
    int sum = 0;
    for (int i = 1; i <= 10;i++){
        sum = sum + i;
    }
    cout << "The sum is " <<sum;
 
    // calculating the sum of the n terms of natural numbers inputted by a user
    int val1;
    while (val1 <= 0)
    {
        cout << "\nEnter a value: ";
        cin >> val1;
    }
    
    int sum1 = 0; 
    for ( int i = 1; i <= val1 ; i++)
    {
       
       sum1 = sum1 + i;
    }

    cout << "The sum of your input is = "<< sum1;

    // checking for a prime number 
    int num1,num2;
    int fnd=0,ctr=0;
    
	cout << "\nInput number for starting range: ";
	cin>> num1;
	cout << "Input number for ending range: ";
	cin>> num2;		

	cout << "\n The prime numbers between "<<num1<<" and "<<num2<<" are:"<<endl;
    for(int i=num1;i<=num2;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0 && i!=1)
               { fnd++;
                 cout<<i<<" ";
                 
               }
               ctr=0;
       }
    cout<<"\n\n The total number of prime numbers between "<<num1<<" to "<<num2<<" is: "<<fnd<<endl;
    return 0;
}