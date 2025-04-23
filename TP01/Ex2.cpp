#include <iostream> 
#include <cctype>
using namespace std;

int main(){

    char character;
    string answer;
  
    do{
        cout << "Enter the Character: ";
        cin >> character;
        if(isupper(character)){
            if(character == 65 || character == 69 || character == 73 || character == 79 || character == 85){
                cout << character << " is " << "Vowel\n";
            } else if(character >= 65 && character <= 90){
                cout << character << " is " << "Consonant\n";
            } else {
                cout << "Invalid Input please try again..." << endl;
            }
        } else if(islower(character)){
            if(character == 97 || character == 101 || character == 105 || character == 111 || character == 117){
                cout << character << " is " << "Vowel\n";
            } else if(character >= 97 && character <= 122){
                cout << character << " is " << "Consonant\n";
            } else {
                cout << "Invalid Input please try again..." << endl;
            }
        } else {
            cout << "Invalid Input please try again..." << endl;
        }

        cout << "Do you want to continue? (Yes/No)" << endl;
        cout << "Answer: ";
        cin >> answer;

    }while(answer != "no" && answer != "No");

    cout << "Exiting the program..." << endl;

    return 0;
}