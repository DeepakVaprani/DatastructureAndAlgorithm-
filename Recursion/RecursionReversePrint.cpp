#include <iostream>
using namespace std;

void Print(int n) {
    if (n == 0) {
        return; // Base case, stop the recursion
    }

    cout << n << " "; // Print the current number

    Print(n - 1); // Recurse with n-1
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Range: ";
    Print(num); // Call the function to print the range
    cout << endl;

    return 0;
}
