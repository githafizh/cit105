// Pointers

#include <iostream>
using namespace std;

int main() {

    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    string name = "Mike";

    cout << pAge << endl; //memory address
    cout << *pAge; //deref a pointer (value at the memory address)

    return 0;
}