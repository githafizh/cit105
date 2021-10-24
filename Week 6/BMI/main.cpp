#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

int main() {

    string name;
    int height;
    double weight;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your height(cm): ";
    cin >> height;
    cout << "Enter your weight(kg): ";
    cin >> weight;

    BMI Student_1(name, height, weight);

    cout << endl << "Student Name: " << Student_1.getName() << endl << 
        "Height: " << Student_1.getHeight() << endl <<
        "Weight: " << Student_1.getWeight() << endl;

    return 0;
}