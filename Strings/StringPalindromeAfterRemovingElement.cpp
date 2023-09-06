#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string s, int i, int j) {
  while (i < j) {
    if (s[i] != s[j])
      return false;
    else {
      i++;
      j--;
    }
  }
  return true;
}

int main() {
 
  string s;
  bool flag = false;

  cout << "Enter the string" << endl;
  cin >> s;

  int i = 0;
  int j = s.length() - 1;
  while (i < j) {
    if (s[i] != s[j]) {
      flag = checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
      break; // Exit the loop after finding a mismatch
    } else {
      i++;
      j--;
    }
  }

  if (flag)
    cout << "Valid Palindrome";
  else
    cout << "Invalid Palindrome";

  return 0;
}
