#include <iostream>
using namespace std;

void sort (int array [], int size);

int main (){

    int array [] = {10,12,4,15,54,2,13,5,313,521,1};
    int size = sizeof(array)/sizeof(array[0]);

    for (int element : array){
        cout << element << " ";
    }
    return 0;
}

void sort (int array [], int size){

}