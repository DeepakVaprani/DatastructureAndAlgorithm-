#include <iostream>

using namespace std;

int main() {
    int temp;

    cout << "Enter the temp in celsius "<<endl;
    cin >> temp;

    cout<<"Temp in Farheniet is " << (temp * 1.8 + 32);
    
    return 0;
}
