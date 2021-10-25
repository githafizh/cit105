#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <ctime>
using namespace std;

class Lib {
    public:
    void menu();
    void registerUser();
    void loginUser();
    void menuMember();
    void listBook();
    void searchBook();
    void borrowBook();
    void returnBook();
    void lateReturn();
};

class BookPolicy {
    public:
    int dateReturn;
    int dateBorrow;
    string book;
};

BookPolicy Policy;

time_t now = time(0);
tm *lctm = localtime(&now);
int year = 1900 + lctm->tm_year;
int month = 1 + lctm->tm_mon;
int day = lctm->tm_mday;

string book[10] = {"Introduction to C++", "Introduction to Java", "Introduction to Python",
                    "Web Programming Fundamentals", "Cracking the Coding Interview", 
                    "Firebase 101", "MERN Stack", "AWS 101", "Cloud Computing Fundamentals",
                    "Introduction to Machine Learning"
                    };

void Lib::listBook(){
    int len = sizeof(book) / sizeof(book[0]);
    for (int i=0; i<len; i++) {
        cout << to_string(i+1) + ". " + book[i] << endl;
    }
}

void Lib::searchBook(){
    string bookName;
    int len = sizeof(book) / sizeof(book[0]);
    cout << "Enter the book name: ";
    cin.ignore();
    getline(cin, bookName);

    for (int i=0; i < len; i++){
        if (bookName == book[i]){
            cout << "Book found" << endl;
            menuMember();
        }
    }

    cout << "Book not found" << endl;
    cout << "Books currently listed in the library are as follow: " << endl;
    listBook();
    menuMember();
}

void Lib::borrowBook(){
    cout << "This is borrow" << endl;
    int opt;
    listBook();

    cout << "Enter the book's number that you want to borrow: ";
    cin >> opt;

    Policy.book = book[opt-1];

    Policy.dateBorrow = day;

    Policy.dateReturn = Policy.dateBorrow + 5;
    cout << "The book " + Policy.book + " should be returned at " + to_string(Policy.dateReturn) + " - " + to_string(month) + " - " + to_string(year) << endl;
    menuMember();
}

void Lib::lateReturn(){
    cout << "Late return" << endl;
    cout << "You will be fined Rp 50.000" << endl;
    menuMember();
}

void Lib::returnBook(){
    int retDay, retMonth, retYear;
    //bool lateReturn = 0;

    cout << "Enter the date you return the book: ";
    cin >> retDay;
    cout << "Enter the month you return the book: ";
    cin >> retMonth;
    cout << "Enter the year you return the book: ";
    cin >> retYear;

    if (retDay > Policy.dateReturn){
        //lateReturn = 1;
        lateReturn();
    } else {
        cout << "The book " + Policy.book + " is sucessfully returned" << endl;
        menuMember();
    }
}

void Lib::menuMember() {
    int opt;
    cout << "Hello Member! Please select the menu below" << endl;
    cout << "1. Search Book" << endl;
    cout << "2. Borrow Book" << endl;
    cout << "3. Return Book" << endl;
    cout << "4. Return to Main Menu" << endl;
    cout << "5. Exit " << endl;
    cout << "Enter your option: " << endl;
    cin >> opt;
    cout << endl;

    switch (opt)
    {
    case 1:
        searchBook();
        break;
    case 2:
        borrowBook();
        break;
    case 3:
        returnBook();
        break;
    case 4:
        menu();
        break;
    case 5:
        break;
    default:
        system("cls");
        cout << "Invalid option, please try again\n" << endl;
        menuMember();
    }

} 

void Lib::loginUser() {
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
        menuMember();
    }
    else {
        system("cls");
        cout << "Credentials not registered, please try again!\n" << endl;
        menu();
    }
}

void Lib::registerUser(){
    string regUser, regPass, ru, rp;
    system("cls");
    cout << "----MEMBER REGISTRATION----" << endl;
    cout << "Enter the username: ";
    cin >> regUser;
    cout << "Enter the password: ";
    cin >> regPass;

    ofstream reg("credentials.txt", ios::app);
    reg << regUser << ' ' << regPass << endl;
    system("cls");
    cout << "\nRegistration Successful\n";
    menu();
}

void Lib::menu() {
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
    Lib obj;
    obj.menu();
    return 0;
}