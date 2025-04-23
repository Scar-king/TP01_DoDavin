#include <iostream>
using namespace std;

int minute, hour, second, remainderMinute;

void timeFormat(int minute){
    hour = minute / 60;
    remainderMinute = minute % 60;
    second = remainderMinute * 60;

    cout << "Time in h:m:s format is: " << hour << ":" << remainderMinute << ":" << second << endl;
}

int main(){
    
    cout << "Enter time in minute: ";
    cin >> minute;

    timeFormat(minute);

    return 0;
}