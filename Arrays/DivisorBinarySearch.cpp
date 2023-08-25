#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int num,div,quo,i,j,mid;

  cout<<"Enter the number"<<endl;
  cin>>num;

  cout<<"Enter the divisor"<<endl;
  cin>>div;

  i=0;j=num;

  while (i <= j) {
    mid = i + (j - i) / 2;

    if (div*mid==num){
      quo=mid;
      break;
    }

    else if (div*mid>num)
     j = mid-1; 
      
    else {
      quo=mid;
      i=mid+1;
    }
  }

  cout<<"quotient is "<<quo<<endl;
  return 0;
}
