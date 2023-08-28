#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num, bit,key=1;

    cout << "Enter the number: "<<endl;
    cin >> num;

    cout<<"Enter the bit"<<endl;
    cin>> bit;

    cout<<(num | (key << bit));
    
    return 0;
}
