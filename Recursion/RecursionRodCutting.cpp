#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solve(int n,int x,int y,int z) {

if(n == 0) return 0;
if(n<0) return INT_MIN;
int ans1= solve(n-x,x,y,z)+1;
int ans2= solve(n-y,x,y,z)+1;
int ans3= solve(n-z,x,y,z)+1;

return max(ans1,max(ans2,ans3));
}

int main() {
    
    int x,y,z,target;

    cout<<"Enter the first segment size "<<endl;
    cin>>x;

    cout<<"Enter the second segment size "<<endl;
    cin>>y;

    cout<<"Enter the third segment size "<<endl;
    cin>>z;

    cout<<"Enter the total length of the rod "<<endl;
    cin>>target;

    if(solve(target,x,y,z)<0)cout<<"Maximum segments 0";
    else cout<<"Maximum segments "<<solve(target,x,y,z);
    return 0;
}
