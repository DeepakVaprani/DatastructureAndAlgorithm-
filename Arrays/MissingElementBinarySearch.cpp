#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> ar;
  int key, size, i, j, mid;

  cout << "Enter the size of the array" << endl;
  cin >> size;

  ar.resize(size);

  for (int i = 0; i < size; i++)
    cin >> ar[i];

  i = 0;
  j = size - 1;

  while (i <= j) {
    mid = i + (j - i) / 2;

    if ((ar[i] - i) != (ar[mid] - mid))
      j = mid;
    else if ((ar[j] - j) != (ar[mid] - mid))
     i = mid+1; 
      
    if ((ar[i] - i) != (ar[i - 1] - (i - 1))) {
      cout << "Missing element is " << ar[i] - 1 << endl;
      break;
    }
  }

  return 0;
}
