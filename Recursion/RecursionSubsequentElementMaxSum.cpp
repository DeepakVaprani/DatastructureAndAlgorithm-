#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void solve(vector<int>v,int sum,int i,int &maxi) {

if(i>=v.size()) {
  maxi=max(sum,maxi);
  return;
}

//include
solve(v,sum+v[i],i+2,maxi);

//exclude 
solve(v,sum,i+1,maxi);

}

int main() {

  int size,sum,i=0,maxi;
  vector<int>v;
  sum=0;
  maxi=INT_MIN;

  cout<<"Enter the size of the vector "<<endl;
  cin>>size;

  v.resize(size);

  cout<<"Enter the elements of the vector "<<endl;
  for(int i=0;i<size;i++) cin>>v[i];

  cout<<"Max sum is "<<solve(v,sum,i,maxi);

  return 0;
}
