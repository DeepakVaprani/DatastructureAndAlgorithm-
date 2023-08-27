#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<string> v;
  vector<int> v1;
  int n;

  cout << "Enter the size of the array" << endl;
  cin >> n;

  cout << "Enter the elements of the array" << endl;

  v.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }


  for (int i = 0; i < n; i++) {
    string s = v[i];

    int hrs = stoi(s.substr(0, 2));    
    int mins = stoi(s.substr(3, 2));   
    int totalmins = hrs * 60 + mins;
    v1.push_back(totalmins);
  }

  sort(v1.begin(), v1.end());

  int mini = INT_MIN;

  for(int i=0;i<v1.size()-1;i++)
  {
    int diff = v1[i+1] - v[i];
    mini = min(diff,mini);
  }

  int lastdiff = (v1[0]+1440)-v1[n-1];
  mini = min(lastdiff,mini);
  cout << "Minimum difference between the two time zones " << min << endl;

  return 0;
}
