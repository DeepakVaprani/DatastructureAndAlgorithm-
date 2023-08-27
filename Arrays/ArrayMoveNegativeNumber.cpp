#include <iostream>
#include<vector>
using namespace std;

int main() {
  int size,j=0;
  vector<int>arr;
  cout<<"Please enter the size of the array"<<endl;
  cin>>size;

  cout<<"Enter the elements of array"<<endl;

  arr.resize(size);
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  for(int i=0;i<size;i++){
    if(arr[i]<0){
      swap(arr[i],arr[j]);
      j++;
    }
  }

  cout<<"Array after modification"<<endl;

  for(int i=0;i<size;i++) cout<<arr[i]<<" ";
  
  return 0;
}
