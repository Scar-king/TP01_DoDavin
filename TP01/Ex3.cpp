#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string name;
    char gender;
    double salary;

    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Enter your Gender (M/F): ";
    cin >> gender;
    do{
        cout << "Enter your Salary (USD): ";
        cin >> salary;
    }while(salary < 0);

    if(gender == 'M' || gender == 'm'){
        cout << "\nHi Mr." << name << "!\n";
        cout << "Your salary is " << salary << " USD\n";
        
        if(salary > 1000){
            cout << "According to the tax rules, you need to pay 9.5% tax, which is " << fixed << setprecision(2) << (salary * 9.5)/100 << " USD\n";
        } else if(salary > 500){
            cout << "According to the tax rules, you need to pay 7% tax, which is " << fixed << setprecision(2) << (salary * 7)/100 << " USD\n";
        } else if(salary > 300) {
            cout << "According to the tax rules, you need to pay 5% tax, which is " << fixed << setprecision(2) << (salary * 5)/100 << " USD\n";
        } else if(salary <=300) {
            cout << "According to the tax rules, you no need to pay tax.\n";
        } 
    } else if(gender == 'F' || gender == 'f'){
        cout << "\nHi Ms." << name << "!\n";
        cout << "Your salary is " << salary << " USD\n";

        if(salary > 1000 && salary >= 0){
            cout << "According to the tax rules, you need to pay 8% tax, which is " << fixed << setprecision(2) << (salary * 8)/100 << " USD\n";
        } else if(salary > 500){
            cout << "According to the tax rules, you need to pay 6.5% tax, which is " << fixed << setprecision(2) << (salary * 6.5)/100 << " USD\n";
        } else if(salary > 300) {
            cout << "According to the tax rules, you need to pay 3.5% tax, which is " << fixed << setprecision(2) << (salary * 3.5)/100 << " USD\n";
        } else if(salary <=300) {
            cout << "According to the tax rules, you no need to pay tax.\n";
        }
    } else {
        cout << "Invalid input! Please try again..." << endl;
    }
    system("Pause");

    return 0;
}