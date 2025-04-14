#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int func_password_check() {
  string password;

  cout << "Enter password: ";
  getline(cin, password);

  if (password.length() < 8 || password.length() > 14) {
    cout << "Result: NO" << endl;
    return 0;
  }

  for (char c : password) {
    if (c < 33 || c > 126) {
      cout << "Result: NO" << endl;
      return 0;
    }
  }

  bool hasUpper = false;
  bool hasLower = false;
  bool hasDigit = false;
  bool hasOther = false;

  for (char c : password) {
    if (isupper(c)) {
      hasUpper = true;
    } else if (islower(c)) {
      hasLower = true;
    } else if (isdigit(c)) {
      hasDigit = true;
    } else {
      hasOther = true;
    }
  }

  int classCount = 0;
  if (hasUpper) classCount++;
  if (hasLower) classCount++;
  if (hasDigit) classCount++;
  if (hasOther) classCount++;

  if (classCount < 3) {
    cout << "Result: NO" << endl;
  } else {
    cout << "Result: YES" << endl;
  }

  return 0;
}
