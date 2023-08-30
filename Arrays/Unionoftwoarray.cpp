#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>v; 
  vector<int>v1;
  vector<int>ans;

  int size, size1,a;

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
    for(int i=0;i<size;i++){
    cin>>a;
    v1.push_back(a);
  }

  for(int i=0;i<size;i++){
    ans.push_back(v[i]);
  }

   for(int i=0;i<size1;i++){
    ans.push_back(v1[i]);
  }

  cout<<"Union of two array"<<endl;

   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

  return 0;
}