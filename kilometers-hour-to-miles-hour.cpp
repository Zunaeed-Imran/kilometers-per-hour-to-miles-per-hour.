#include <iostream>

using namespace std;

int main () {
  float kilometer, mile;

  cout << "Enter Kilometer per Hour: ";
  cin >> kilometer;

  mile = kilometer * 0.621371;

  cout << "Mile Per Hour is: " << mile;

  return 0;
}