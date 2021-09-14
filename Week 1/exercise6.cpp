// Working with Numbers

#include <iostream>
#include <cmath>
using namespace std;

void powerTo(){ // (int, power to)
    cout << pow(2, 5) << endl;
}

void squareRoot(){
    cout << sqrt(16) << endl;
}

void ceilUp(){ // will round the number up
    cout << ceil(4.1) << endl;
}

void floorDown(){ // will round the number down
    cout << floor(4.6) << endl;
}

void findMax() { // will find higher number
    cout << fmax(12, 8) << endl;
}

void findMin() { // will find lower number
    cout << fmin(12, 8) << endl;
}

int main(){

    findMin();

    return 0;
}