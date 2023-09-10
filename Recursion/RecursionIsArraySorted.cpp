#include <iostream>
#include <vector>

using namespace std;

bool isSort(vector<int>& v, int &n, int i) {
    if (i == n) return true;
    
    if (v[i] < v[i-1]) return false;
    
    return isSort(v, n, i + 1);
}

int main() {
    int size;
    vector<int> v;
    
    cout << "Enter the size of the array" << endl;
    cin >> size;
    v.resize(size);
    
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    if (isSort(v, size, 1)) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }
    
    return 0;
}
