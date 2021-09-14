// User Input

#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "Enter your name: " << endl;
    /*cin >> name; -> Only get one word, didn't 
                    get character after space */
    getline(cin, name);

    cout << "Hello " << name << endl;

    return 0;
}