#include <iostream>
using namespace std;

int main(){

    int n, sum;
    do{
        cout << "Enter n, should be greater than 50 (n>50): ";
        cin >> n;
    } while(n < 50);

    sum = (n*(n+1))/2;
    cout << "The summation of numbers from 1 to " << n << " except number 10 and 30 is: " << sum-40;

    return 0;
}