#include <iostream>
#include<string>
#include<vector>
#include "Time.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    vector<Time>Time(2);
    for (int i = 0; i < Time.size(); i++)
    {
        Time[i].Setmin();
        Time[i].Getmin();
        Time[i].Setsec();
        Time[i].Getsec();
        Time[i].PrintClass();
        Time[i].SetDop();
        Time[i].GetDop();
        
        bool menu;
        cout << "Введите 0 для прибавления секунд, введите 1 для вычитания секунд: ";
        cin >> menu;
        cout << endl;
        switch (menu)
        {
            case 0: Time[i].GetSum(); break;
            case 1: Time[i].GetRazn(); break;
            
            default: break;
        };
        Time[i].PrintClass();
    }

}