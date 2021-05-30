#pragma once
#include<iostream>
using namespace std;
class Time
{
    long min;
    int sec;
    int dop;
public:
    Time();
    Time(long min, int sec);
    ~Time();
    void Setmin();
    long Getmin();
    Time& operator++();
    Time& operator++(int a);
    void Setsec();
    int Getsec();
    void SetDop();
    int GetDop();
    void PrintClass();
    void GetRazn();
    void GetSum();
};