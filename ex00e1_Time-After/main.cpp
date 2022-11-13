#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hour, minute;
    int dur;

    cin >> hour >> minute;
    cin >> dur;

    minute += dur;

    if( minute >= 60 ){
        hour += minute/60;
        minute %= 60;
    }

    if( hour > 23 )
        hour %= 24;

    string h, m;

    if( hour < 10 )
        h = '0' + to_string(hour);
    else
        h = to_string(hour);

    if( minute < 10 )
        m = '0' + to_string(minute);
    else
        m = to_string(minute);

    cout << h + " " + m;

    return 0;
}
