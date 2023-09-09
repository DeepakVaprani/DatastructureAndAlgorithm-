#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solve(vector<int>v,int target) {

if(target == 0) return 0;
if(target<0) return INT_MAX;

int mini=INT_MAX;
for(int i=0;i<v.size();i++){
  int ans = solve(v,target-v[i]);
  if(ans != INT_MAX) mini=min(mini,ans+1);
}

return mini;
}

int main() {
    
    vector<int> v;
    int size,target;

    cout<<"Enter the size"<<endl;
    cin>>size;

    v.resize(size);
    for(int i=0;i<size;i++) cin>>v[i];

    cout<<"Enter the target sum"<<endl;
    cin>>target;

    cout<<"Minimum number of elements to reach the target "<<solve(v,target);
    return 0;
}
