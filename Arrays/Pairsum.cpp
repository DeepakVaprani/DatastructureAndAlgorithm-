#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>v; 
  vector<int>v1;

  int size, size1,a,sum;

  cout<<"Enter size of array1"<<endl;
  cin>>size;

  cout<<"Enter the element of array 1"<<endl;

  for(int i=0;i<size;i++){
    cin>>a;
    v.push_back(a);
  }
  cout<<"Enter size of array2"<<endl;
  cin>>size1;
  
  cout<<"Enter the element of array 2"<<endl;
    for(int i=0;i<size1;i++){
    cin>>a;
    v1.push_back(a);
  }

  cout<<"Enter the required sum"<<endl;
  cin>>sum;

  for(int i =0;i<size;i++){
    for(int j=0;j<size1;j++){
      if(v[i]+v1[j]==sum) {
        cout<<"Pair is "<<v[i]<<" "<<v1[j]<<endl;
        break;
      }
    }
  }


  return 0;
}