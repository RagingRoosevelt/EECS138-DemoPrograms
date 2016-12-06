#include <iostream>
#include <iomanip>

using namespace std;

class Time{
private:
    int h;
    int m;
    bool mode24;
public:
    Time(int hours, int minutes, bool mode);
    void printTime();
    Time deltaF(int deltaH, int deltaM);
    void setH(int hours);
    void setM(int minutes);
    void toggleMode();
    int getH();
    int getM();
};



int main()
{
    Time t(15,5,false);

    t.printTime();

    t.toggleMode();
    cout << endl;

    t.printTime();

    return 0;
}

int Time::getH()
{
    if (mode24)
    {
        return h;
    }
    else
    {
        if (h == 0)
        {
            return 12;
        }
        else if (1 <= h && h <= 12)
        {
            return h;
        }
        else
        {
            return h-12;
        }
    }

}
int Time::getM()
{
    return m;
}

void Time::toggleMode()
{
    mode24 = !mode24;
}

void Time::setM(int minutes)
{
    if (0 <= minutes && minutes <= 59)
    {
        m = minutes;
    }
}
void Time::setH(int hours)
{
    h = hours;
}

void Time::printTime()
{
    cout << setfill('0') << setw(2) << getH()
         << ":"
         << setfill('0') << setw(2)<< getM();

    if (!mode24)
    {
        if (h < 12)
        {
            cout << " am";
        }
        else
        {
            cout << " pm";
        }
    }
}


Time Time::deltaF(int deltaH, int deltaM)
{
    Time r(h+deltaH, m+deltaM, mode24);
    return r;
}

Time::Time(int hours, int minutes, bool mode)
{
    h = hours;
    m = minutes;
    mode24 = mode;
}
