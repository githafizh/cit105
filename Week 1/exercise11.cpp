// Functions

#include <iostream>
using namespace std;

void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age << endl;
}

int main() {

    sayHi("Mike", 60);
    sayHi("Tom", 45);
    sayHi("Steve", 19);

    return 0;
}