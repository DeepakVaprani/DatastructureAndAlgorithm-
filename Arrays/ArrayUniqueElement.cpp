#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;

  int size, uniqueElement=0;

  cout<<"Enter the size of the array"<<endl;
   
  cin>>size;

  for(int i =0;i<size;i++) 
  {
    cin>>a;
    v.push_back(a);
  }

  for(int i=0;i<size;i++) uniqueElement=uniqueElement^v[i];

  cout<<"Unique element is "<<uniqueElement<<endl;
  
  return 0;
}