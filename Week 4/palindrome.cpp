#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char words[255];
    int length;
    int flag = 0;
    
    cout << "Enter a string: "; 
    cin >> words;
    
    length = strlen(words);
    
    for(int i=0; i < length; i++){
        if(words[i] != words[length-i-1]){
            flag = 1;
            break;
        }
    }
    
    if (flag) {
        cout << words << " is not a palindrome" << endl; 
    }    
    else {
        cout << words << " is a palindrome" << endl; 
    }

    return 0;
}