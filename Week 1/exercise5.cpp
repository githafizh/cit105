// Working with Strings

#include <iostream>
using namespace std;

void arrayNull(){
    string phrase = "Giraffe Academy";
    cout << phrase[0] << endl;
}

void findWord(){ // Find in which index words come out
    string phrase = "Giraffe Academy";
    cout << phrase.find("Academy") << endl;
}

void subStr(){ // Function to cut words, (start index, length)
    string phrase = "Giraffe Academy";
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub << endl;
}

int main(){
    //arrayNull();
    //findWord();
    subStr();
}