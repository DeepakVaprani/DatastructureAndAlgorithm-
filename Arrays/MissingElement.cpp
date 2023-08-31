#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

  vector<int>v;
  int key,size,sum,sum1;

  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  v.resize(size);

  for(int i=0;i<size;i++) cin>>v[i];

  for(int i=0;i<size;i++) sum+=v[i];

  sum1=(size+1)*(size+2)/2;

  cout<<"Missing element is "<<sum1 - sum<<endl;
  return 0;
}