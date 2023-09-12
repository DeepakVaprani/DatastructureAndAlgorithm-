#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int>arr,int n,int i) {
    if (i==n) {
        return; // Base case, stop the recursion
    }
    
    cout<<arr[i]<<" ";
    
    printArray(arr,n,++i); 
}

int main() {
    int size;
    vector<int>arr;
    cout << "Enter the Array size: "<<endl;
    cin >> size;

    arr.resize(size);
    cout<<"Enter the elements"<<endl;

    for(int i =0;i<size;i++) cin>>arr[i];
    printArray(arr,size,0);

    return 0;
}
