#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  
  vector<int> v1;
  vector<int> v2;
  int i, j, n, m, carry = 0;
  string ans;

  cout << "Enter the size of first array" << endl;
  cin >> n;
  v1.resize(n);

  cout << "Enter the elements of first array" << endl;
  for (int i = 0; i < n; i++) cin >> v1[i];

  cout << "Enter the size of second array" << endl;
  cin >> m;
  v2.resize(m);

  cout << "Enter the elements of second array" << endl;
  for (int i = 0; i < m; i++) cin >> v2[i];

  i = n - 1;
  j = m - 1;

  while (i >= 0 && j >= 0) {
    int a = (v1[i] + v2[j] + carry) % 10;
    carry = (v1[i] + v2[j] + carry) / 10;
    ans.push_back(a + '0');  // Convert int to character before pushing
    i--;
    j--;
  }

  while (i >= 0) {
    int a = (v1[i] + carry) % 10;
    carry = (v1[i] + carry) / 10;
    ans.push_back(a + '0');
    i--;
  }

  while (j >= 0) {
    int a = (v2[j] + carry) % 10;
    carry = (v2[j] + carry) / 10;
    ans.push_back(a + '0');
    j--;
  }

  if (carry) ans.push_back(carry + '0');

  reverse(ans.begin(), ans.end());

  cout << ans << " ";

  return 0;
}
