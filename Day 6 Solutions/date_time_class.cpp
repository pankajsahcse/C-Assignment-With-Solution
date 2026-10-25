#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    void read()
    {
        cout << "Enter date with spacing (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    void print()
    {
        cout << day << "/" << month << "/" << year<<endl;
    }

    void add(int days)
    {
        day = day + days;
    }

    void subtract(int days)
    {
        day = day - days;
    }

    // Function overloading
    void print(char separator)
    {
        cout << day << separator << month << separator << year<<endl;
    }
};

class Time
{
    int hour, minute, second;

public:
    void read()
    {
        cout << "Enter time with spacing (hh mm ss): ";
        cin >> hour >> minute >> second;
    }

    void print()
    {
        cout << hour << ":" << minute << ":" << second<<endl;
    }

    void add(int seconds)
    {
        second = second + seconds;

        minute = minute + second / 60;
        second = second % 60;

        hour = hour + minute / 60;
        minute = minute % 60;

        hour = hour % 24;
    }

    void subtract(int seconds)
    {
        int total = hour * 3600 + minute * 60 + second;
        total = (total - seconds % 86400 + 86400) % 86400;

        hour = total / 3600;
        minute = (total % 3600) / 60;
        second = total % 60;
    }

    // Function overloading
    void print(char separator)
    {
        cout << hour << separator << minute << separator << second<<endl;
    }
};

int main()
{
    Date d;
    d.read();
    cout << "\nDate: ";
    d.print();
    d.print('-');


    d.add(2);
    cout << "\nDate after adding days: ";
    d.print();

    Time t;
    t.read();
    cout << "\nTime: ";
    t.print();


    t.add(30);
    cout << "\nTime after adding seconds: ";
    t.print();
    t.print('-');

    cout << endl;
    return 0;
}
