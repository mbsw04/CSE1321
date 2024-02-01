#include <iostream>
#include <string>

using namespace std;

int main()
{
    int day;
    int month;
    string month1;
    int year;
    cout << "Hello World!\n";
    cout << "Enter the day (number): ";
    cin >> day;
    cout << "Enter the month (number): ";
    cin >> month;
    cout << "Enter the month (String): ";
    cin >> month1;
    cout << "Enter the year (number): ";
    cin >> year;

    cout << "Here are some ways to reepresent the date:" << endl;
    cout << month << "/" << day << "/" << year << endl;
    cout << year << "/" << day << "/" << month << endl;
    cout << day << "/" << month << "/" << year << endl;
    cout << month1 << " " << day << ", " << year << endl;
    cout << day << " " << month1 << " " << year << endl;


}

