#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int minutes, hour;
    double callRate;
    string day, callTime, hours;

    cout << "Please enter time in 24-hr notation, e.g. if 1:30 P.M., then input as 13:30: " << endl;
    cin >> callTime;
    cout << "Please enter the first two letters of the day you place your call: " << endl;
    cin >> day;
    cout << "Enter the number of minutes:" << endl;
    cin >> minutes;

    //Extract the hours from the callTime;
    hours = callTime.substr(0,2);

    //Convert string to int
    stringstream time(hours);

    //convert string(hours) to int(hour)
    time >> hour;

    if (day == "Sa" || day == "Su")
    {
        callRate = minutes * .15;
    } else if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr")
    {
        if (hour >= 8 && hour <= 18)
        {
            callRate = minutes * .40;
        } else if (hour < 8 || hour > 18)
        {
            callRate = minutes * .25;
        } else
            return 0;
    }

    cout << "The cost of the call is " << callRate << endl;

    return 0;
}