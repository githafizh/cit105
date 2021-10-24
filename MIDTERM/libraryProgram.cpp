#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void menuMember() {
    int opt;
    cout << "Hello Member! Please select the menu below" << endl;
    cout << "1. Search Book" << endl;
    cout << "2. Borrow Book" << endl;
    cout << "3. Return Book" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your option: " << endl;
    cin >> opt;
    cout << endl;

    switch (opt)
    {
    case 1:
        /* code */
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        system("cls");
        cout << "Invalid option, please try again\n" << endl;
        menuMember();
    }

} 

void loginUser() {
    int count;
    string user, pass, u, p;
    system("cls");
    cout << "Enter your login credentials" << endl;
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    ifstream input("credentials.txt");
    while(input >> u >> p){
        if (u==user && p==pass){
            count = 1;
            system("cls");
        }
    }
    input.close();
    if(count==1){
        cout << "Login successful!" << endl;
        menuMember();
    }
    else {
        cout << "Credentials not registered, please try again!" << endl;
    }
}

void registerUser(){
    string regUser, regPass, ru, rp;
    system("cls");
    cout << "Enter the username: ";
    cin >> regUser;
    cout << "\nEnter the password: ";
    cin >> regPass;

    ofstream reg("credentials.txt", ios::app);
    reg << regUser << ' ' << regPass << endl;
    system("cls");
    cout << "\nRegistration Successful\n";
    //menu();
}

void menu() {
    int opt;
    cout << "---------PRESIDENT UNI LIBRARY---------" << endl;
    cout << "Please Select the Menu Below" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your option: " << endl;
    cin >> opt;
    cout << endl;

    switch (opt)
    {
    case 1:
        registerUser();
        break;
    case 2:
        loginUser(); 
        break;
    case 3:
        break;
    default:
        system("cls");
        cout << "Invalid option, please try again\n" << endl;
        menu();
    }
}

int main() {
    menu();
    return 0;
}