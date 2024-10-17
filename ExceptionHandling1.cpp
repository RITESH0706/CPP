#include <iostream>
#include <stdexcept>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            throw invalid_argument("Invalid date!");
        }
    }

    void printDate() const {
        cout << "Date: " << day << "/" << month << "/" << year <<endl;
    }

private:
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    bool isValidDate(int d, int m, int y) const {
        if (m < 1 || m > 12 || d < 1) {
            return false;
        }
        int daysInMonth = 31;
        if (m == 4 || m == 6 || m == 9 || m == 11) {
            daysInMonth = 30;
        } else if (m == 2) {
            daysInMonth = (isLeapYear(y)) ? 29 : 28;
        }
        return d <= daysInMonth;
    }
};

int main() {
    try {
        Date date(29, 2, 2024); 
        date.printDate();

        date.setDate(31, 4, 2022); 
        date.printDate();

    } catch (const std::invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    cout<<"INVALID";

    return 0;
}

