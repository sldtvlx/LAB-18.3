#include <iostream>
#include "Time.h"
using namespace std;

Time::Time()
{
    min = 0;
    sec = 0;
    dop = 0;
}
Time::Time(long min, int sec)
{
    this->min = min;
    this->sec = sec;
    this->dop = dop;
}
Time:: ~Time() {}
void Time::Setmin()
{
    long val;
    cout << "Введите минуты:  ";
    cin >> val;
    while (val < 0)
    {
        cout << "Введите корректное число: ";
        cin >> val;
    }
    this->min = val;
}
long Time::Getmin() { return min; }
void Time::Setsec()
{
    int tmp;
    cout << "Введите секунды: ";
    cin >> tmp;
    while (tmp > 59 || tmp < 0)
    {
        cout << "Введите корректное число: ";
        cin >> tmp;
    }
    this->sec = tmp;
}
int Time::Getsec() { return sec; }
void Time::SetDop()
{
    int tmp1;
    cout << "Введите кол-во дополнительных секунд: ";
    cin >> tmp1;
    while (tmp1 > 59 || tmp1 < 0)
    {
        cout << "Введите корректное число: ";
        cin >> tmp1;
    }
    this->dop = tmp1;
}
int Time::GetDop() { return dop; }
void Time::PrintClass()
{
    cout << "Значение: " << this->min << ":" << this->sec << endl;
}
void Time::GetRazn()
{
    if (sec >= dop)
        sec -= dop;
    else {
        min--;
        sec = 60 + sec - dop;
    }
}

void Time::GetSum()
{
    if (sec + dop >= 60)
    {
        min++;
        sec = (sec + dop) - 60;
    }
    else
        sec += dop;
}

Time& Time::operator++()
{
    min++;
    return *this;
}
Time& Time::operator++(int a)
{
    Time tmp(*this);
    this->min++;
    return tmp;
}