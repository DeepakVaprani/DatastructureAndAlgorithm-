#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  vector<int>v;
  int size,i,j,mid,pos,key;

  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  v.resize(size);
  cout<<"Enter the array elements"<<endl;
  for(int i=0;i<size;i++) cin>>v[i];

  cout<<"Enter the key to search"<<endl;
  cin>>key;

  i=0;j=size-1;

  while (i <= j) {
    mid = i + (j - i) / 2;

    if (v[mid]==key){
      pos=mid;
      break;
    }

    if (v[mid-1]==key && mid>0){
      pos=mid-1;
      break;
    }

    if (v[mid+1]==key && mid<size-1){
      pos=mid+1;
      break;
    }
      
    else if (v[mid]>key)
     j = mid-2; 
      
    else {
      i=mid+2;
    }
  }

  cout<<"Element present at the position "<<pos+1<<endl;
  return 0;
}
