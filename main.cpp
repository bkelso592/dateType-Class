#include <iostream>
#include "dateType.h"

using namespace std;

// Program to verify that the modified dateType class is working correctly
int main() {
    cout << "Testing default constructor ... ";
    dateType defDate;
    defDate.printDate();  // Change print() to printDate()
    cout << endl;

    cout << "Testing constructor with parameters ... ";
    dateType date(2, 29, 2016);
    date.printDate();
    cout << endl;

    cout << "Setting date with invalid year (1000) ... ";
    date.setDate(2, 29, 1000);
    date.printDate();
    cout << endl;

    cout << "Setting date with invalid month (13) ... ";
    date.setDate(13, 29, 2016);
    date.printDate();
    cout << endl;

    cout << "Setting date with invalid day (April 31) ... ";
    date.setDate(4, 31, 2016);
    date.printDate();
    cout << endl;

    cout << "Setting invalid date: Feb 29, 2015 ... ";
    date.setDate(2, 29, 2015);
    date.printDate();
    cout << endl;

    cout << "Setting valid date: Feb 28, 2015 ... ";
    date.setDate(2, 28, 2015);
    date.printDate();
    cout << endl;

    cout << "Setting valid date (August 15, 2016) ... ";
    date.setDate(8, 15, 2016);
    date.printDate();
    cout << endl;

    return 0;
}