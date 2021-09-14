#include <iostream>
using namespace std;

int main (){
    int songs;
    float dollarPrice;
    cout << "Enter the number of songs you wish to purchase today." << endl;
    cin >> songs;
    dollarPrice = 0.99 * songs;
    cout << "$" << dollarPrice << endl;
    return 0;
}