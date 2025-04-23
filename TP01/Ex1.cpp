#include <iostream>
using namespace std;

string name;
char gender;
string major;
int age;

void userInput(){
    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Enter your Gender: ";
    cin >> gender;
    cout << "Enter your Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your Major: ";
    getline(cin, major);
}

void genderDetection(){
    if(gender == 'm' || gender == 'M'){
        cout << "Hi, Mr." << name << "! your age is " << age << " year old and you learn " << major << "!" << endl;
    } else if(gender == 'f' || gender == 'F'){
        cout << "Hi, Ms." << name << "! you are " << age << " year old and you are majoring in " << major << endl;
    }
}

void ageCondition(){
    if(age >= 18 && age > 0){
        cout << "\t\t***You can vote***\n\n";
    } else if(age <= 18 && age > 0){
        cout << "\t\t***You can not vote***\n\n";
    }
}

int main(){

   userInput();
   genderDetection();
   cout << "\n\n";
   ageCondition();
   system("Pause");

    return 0;
}