#include "deque.h"
#include <iostream>

int main() {
  Deque d;
  d.push_front(5);
  d.push_front(3);
  std::cout << d.size();
  return 0;
}

