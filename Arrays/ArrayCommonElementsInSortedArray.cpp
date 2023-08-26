#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
  int size1,size2,size3,i1=0,j=0,k=0;
  vector<int>a;
  vector<int>a1;
  vector<int>a2;
  
  cout<<"Please enter the size of the first array"<<endl;
  cin>>size1;
  cout<<"Enter the elements of array"<<endl;
  a.resize(size1);
  for(int i=0;i<size1;i++){
    cin>>a[i];
  }

  cout<<"Please enter the size of the second array"<<endl;
  cin>>size2;
  cout<<"Enter the elements of array"<<endl;
  a1.resize(size2);
  for(int i=0;i<size2;i++){
    cin>>a1[i];
  }

  cout<<"Please enter the size of the third array"<<endl;
  cin>>size3;
  cout<<"Enter the elements of array"<<endl;
  a2.resize(size3);

  for(int i=0;i<size3;i++){
    cin>>a2[i];
  }

  cout<<"Common elements are ";
  while(i1<size1 && j<size2 && k<size3){

    if(a[i1]==a1[j] && a1[j]==a2[k]){
      cout<<a[i1]<<" ";
      i1++;
      j++;
      k++;
    }
    else if(a[i1]<a1[j]) i1++;
    else if (a1[j]<a2[k]) j++;
    else k++;
  }

  return 0;
}
