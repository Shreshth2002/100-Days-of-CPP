/*
FOR LOOP SYNTAX
for (initialization; condition; increment) {
for (initialization; condition; increment) {
 //set of statements for inner loop
}
 //set of statement for outer loop
}

WHILE LOOP SYNTAX
while(condition) {
while(condition) {
// set of statement of inside while loop
}
//set of statement for outer while loop
}

DO WHILE LOOP SYNTAX
do {
while(condition) {
for (initialization; condition; increment) {
//set of statement of inside do-while loop
}
// set of statement of inside do-while loop
}
//set of statement of outer do-while loop
} while(condition);
*/


// C++ program to display 7 days of 3 weeks

#include <iostream>
using namespace std;

int main() {
    int weeks = 3, days_in_week = 7;

    for (int i = 1; i <= weeks; ++i) {
        cout << "Week: " << i << endl;

        for (int j = 1; j <= days_in_week; ++j) {
            cout << "    Day:" << j << endl;
        }
    }

    return 0;
}