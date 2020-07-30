#include <iostream>
#include <string>
using namespace std;

int main()
{
    int minutes;
    string day, callTime, hrs;

    cout << "Please enter time in 24-hr notation, e.g. if 1:30 P.M., then input as 13:30: " << endl;
    cin >> callTime;
    cout << "Please enter the first two letters of the day you place your call: " << endl;
    cin >> day;
    cout << "Enter the number of minutes:" << endl;
    cin >> minutes;

    //Extract the hours from the callTime;
    hrs = callTime.substr(0,2);

    cout << callTime << endl;
    cout << minutes << endl;
    cout << day << endl;
    cout << hrs << endl;
    return 0;
}