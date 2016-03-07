#include <iostream>

using namespace std;

struct Time{
    int hour;
    int minute;
    int second;
};

Time secondsInTheFuture(Time now, int seconds);
void printTime(Time time);

int main()
{
    Time now = {11,0,0};
    Time later;

    int secondsLater = 1.25*60*60;

    later = secondsInTheFuture(now, secondsLater);

    cout << "It is currently ";
    printTime(now);
    cout << "And in " << secondsLater << " seconds, it will be ";
    printTime(later);

    return 0;
}

Time secondsInTheFuture(Time now, int seconds)
{
    Time later;
    later.second = (now.second + seconds) % 60;

    int minutes = (now.second + seconds) / 60;
    later.minute = (now.minute + minutes) % 60;

    int hours = (now.minute + minutes) / 60;
    later.hour = (now.hour + hours);

    return later;
}

void printTime(Time time)
{
    cout << time.hour << ":";

    if (time.minute < 10)
        cout << "0";
    cout << time.minute << ":";

    if (time.second < 10)
        cout << "0";
    cout << time.second;

    cout << endl;

    return;
}
