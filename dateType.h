#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>

class dateType {
private:
    int month;
    int day;
    int year;

    // Helper function to check if a year is a leap year
    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Helper function to get the number of days in a month
    int getDaysInMonth(int month, int year) {
        switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 1;
        }
    }

public:
    // Default constructor
    dateType() : month(1), day(1), year(1900) {}

    // Parameterized constructor
    dateType(int m, int d, int y) {
        setDate(m, d, y);
    }

    // Function to set date with validation
    void setDate(int m, int d, int y) {
        if (y >= 1900) {
            year = y;
        }
        else {
            std::cout << "Date invalid, setting to 1/1/1900\n";
            year = 1900;
            month = 1;
            day = 1;
            return;
        }

        if (m >= 1 && m <= 12) {
            month = m;
        }
        else {
            std::cout << "Date invalid, setting to 1/1/1900\n";
            month = 1;
            day = 1;
            year = 1900;
            return;
        }

        int daysInMonth = getDaysInMonth(month, year);
        if (d >= 1 && d <= daysInMonth) {
            day = d;
        }
        else {
            std::cout << "Date invalid, setting to 1/1/1900\n";
            day = 1;
            month = 1;
            year = 1900;
        }
    }

    // Getter functions
    int getMonth() const { return month; }
    int getDay() const { return day; }
    int getYear() const { return year; }

    // Print function to display date
    void printDate() const {
        std::cout << month << "-" << day << "-" << year << std::endl;
    }
};

#endif // DATETYPE_H