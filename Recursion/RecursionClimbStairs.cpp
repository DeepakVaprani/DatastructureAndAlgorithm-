#include <iostream>
using namespace std;

int  climbStairs(int n) {
    if (n == 0 || n==1) {
        return 1; // Base case, stop the recursion
    }

    return climbStairs(n - 1) + climbStairs(n - 2); 
}

int main() {
    int num;
    cout << "Enter the number: "<<endl;
    cin >> num;

    cout << "No of ways: "<<climbStairs(num) << " ";
  

    return 0;
}
