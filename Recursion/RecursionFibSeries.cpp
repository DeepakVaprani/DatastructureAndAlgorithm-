#include <iostream>
using namespace std;

int  Fib(int n) {
    if (n == 0 || n==1) {
        return n ; // Base case, stop the recursion
    }

    return Fib(n - 1) + Fib(n - 2); 
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Fib series : ";
    for (int i = 0; i < num; i++) {
        cout << Fib(i) << " ";
    }

    return 0;
}
