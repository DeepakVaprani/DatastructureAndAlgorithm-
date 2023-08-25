#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int num,ans,i,j,mid;

  cout<<"Enter the number whose square root we need to find"<<endl;

  cin>>num;

  i=0;j=num;

  while (i <= j) {
    mid = i + (j - i) / 2;

    if (mid*mid==num){
      ans=mid;
      break;
    }
      
    else if (mid*mid>num)
     j = mid-1; 
      
    else {
      ans=mid;
      i=mid+1;
    }
  }

  cout<<"Nearest square root value is "<<ans<<endl;

  return 0;
}
