#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

  vector<int>v;
  int key,size;

  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  v.resize(size);

  for(int i=0;i<size;i++) cin>>v[i];

  cout<<"Enter the key to be searched"<<endl;
  cin>>key;

    auto lower = lower_bound(v.begin(), v.end(), key);
    auto upper = upper_bound(v.begin(), v.end(), key);

  cout<<"Total occurences are "<<upper - lower<<endl;

  return 0;
}