#include <iostream>
#include<vector>

using namespace std;

int main() {
  cout << "Hello world!" << endl;

  //peak element

  vector<int>arr;
  int size,i,j,mid;

  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  arr.resize(size);
  for(int i=0;i<size;i++)cin>>arr[i];

  i=0;j=size-1;
  while(i<=j){

    mid =i +(j-i)/2;

    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
      cout<<"Peak Element is "<<arr[mid]<<endl;
      break;
    }
    else if(arr[mid]>arr[mid-1]) i=mid+1;
    else j=mid-1;
  }

  return 0;
}