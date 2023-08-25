#include <iostream>
#include<vector>
using namespace std;

int main() {
  int size;
  vector<int>arr;
  cout<<"Please enter the size of the array"<<endl;
  cin>>size;

  cout<<"Enter the elements of array"<<endl;

  arr.resize(size);
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  int zero,one,two;
  
  for(int i=0;i<size;i++){
    if(arr[i]==0) zero++;
    else if(arr[i]==1) one++;
    else two++;
  }

  for(int i=0;i<size;i++)
  {
    if(zero){
      arr[i]=0;
      zero--;
    }
    else if(one){
      arr[i]=1;
      one--;
    }
    else{
      arr[i]=2;
    }
  }

  cout<<"Array after sorting"<<endl;

  for(int i=0;i<size;i++) cout<<arr[i]<<" ";
  
  return 0;
}
