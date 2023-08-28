#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num, revnum;

    cout << "Enter the number: ";
    cin >> num;

    int j = 0;
    while (num != 0) {
        int rem = num % 10;
        revnum = revnum + rem * pow(10, j);
        num /= 10;  // Update num by removing the last digit
        j++;
    }

    cout << "Reverse number is " << revnum << endl;

    return 0;
}
