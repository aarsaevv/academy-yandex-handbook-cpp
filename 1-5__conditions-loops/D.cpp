#include <iostream>
using namespace std;

bool isYearLeap(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return true;
    }
    return false;
}

int main() {
    int month, year;

    cin >> month >> year;

    switch (month) {
        case 1:
            cout << "31";
            break;
        case 2:
            isYearLeap(year) ? cout << "29" : cout << "28";
            break;
        case 3:
            cout << "31";
            break;
        case 4:
            cout << "30";
            break;
        case 5:
            cout << "31";
            break;
        case 6:
            cout << "30";
            break;
        case 7:
            cout << "31";
            break;
        case 8:
            cout << "31";
            break;
        case 9:
            cout << "30";
            break;
        case 10:
            cout << "31";
            break;
        case 11:
            cout << "30";
            break;
        case 12:
            cout << "31";
            break;
    }
}