#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int>& v, int i, int j, int &key) {

    if (i > j) return false;

    int mid = i + (j-i)/2;
    
    if(v[mid]==key) return true;
    else if (v[mid]>key) return binarySearch(v, i, mid-1,key);
    else return binarySearch(v, mid+1, j,key);
    
    
}

int main() {
    int size,key,i,j;
    vector<int> v;
    
    cout << "Enter the size of the array" << endl;
    cin >> size;
    v.resize(size);
    
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    cout<<"Enter the key"<<endl;
    cin>>key;

    i=0;
    j=size-1;

    if (binarySearch(v, i, j,key)) {
        cout << "Key is present in the array";
    } else {
        cout << "Key is not present in the array";
    }
    
    return 0;
}
