#include "deque.h"
#include <iostream>

using namespace std;

int main() {
  Deque d;
  cout << d.empty() << endl;
  d.push_back(1);
  d.push_back(2);
  d.push_back(3);
  d.push_back(4);
  d.push_back(5);
  d.push_back(6);
  cout << d[0] << endl;
  cout << d[1] << endl;
  cout << d[2] << endl;
  cout << d[3] << endl;
  cout << d[4] << endl;
  cout << d[5] << endl;
  return 0;
}

