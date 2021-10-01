#include <iostream>
using namespace std;
char flag;
string regUser, regPassword, confirmPass;

//Login Module
void loginMember(){
    string logUser, logPassword;

    while (flag != '6'){
        cout << "Input the username: ";
        getline(cin, logUser);
        cout << "\nInput the password: ";
        getline(cin, logPassword);

        if (logUser == regUser && logPassword == regPassword){
            cout << "Welcome!" << endl;
            flag = '6';
        } 

    }
}
//Reigster Module
void regMember(){

    while (flag != '6')
    {
        cout << "Input the username: ";
        getline(cin, regUser);
        cout << "\nInput the password: ";
        getline(cin, regPassword);
        cout << "\nConfirm the password: ";
        getline(cin, confirmPass);
        
        if (confirmPass == regPassword)
        {
            flag = '6';
        } else {
            cout << "\nIncorrect password, please input again: ";
            getline(cin, confirmPass);
        }
    }
}

// Menu
void menu(){
    int opt;

    while (flag != '6')
    {
        cout << "Please select the menu!" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
            regMember();
            break;
        case 2:
            loginMember();
            break;
        case 3:
            flag = '6';
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
    }
    
}

//Driver Code
int main(){
    menu();
    return 0;
}