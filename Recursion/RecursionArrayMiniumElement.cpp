#include <iostream>
#include <vector>
#include<climits>

using namespace std;

void printArray(vector<int>arr,int n,int i,int& min) {
    if (i==n) {
        return; // Base case, stop the recursion
    }
    
   if(arr[i]<min) min=arr[i];
    
    printArray(arr,n,i+1,min); 
}

int main() {
    int size,min=INT_MAX; 
    vector<int>arr;
    cout << "Enter the Array size: "<<endl;
    cin >> size;

    arr.resize(size);
    cout<<"Enter the elements"<<endl;

    for(int i =0;i<size;i++) cin>>arr[i];
    printArray(arr,size,0,min);

    cout<<"Minimum is "<<min;
    return 0;
}
