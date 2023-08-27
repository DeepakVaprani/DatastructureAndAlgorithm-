#include <iostream>
#include<vector>
using namespace std;

int main() {
  int size,j=0;
  vector<int>arr;
  vector<int>arr1;
  cout<<"Please enter the size of the array"<<endl;
  cin>>size;

  cout<<"Enter the elements of array"<<endl;

  arr.resize(size);
  arr1.resize(size);

  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  for(int i=0;i<size;i++){
    if(arr1[arr[i]]==-1){
      cout<<"Duplicate element is "<<arr[i]<<endl;
      break;
    }
    else{
      arr1[arr[i]]= -1;
    }
  }

  return 0;
}
