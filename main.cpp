#include "deque.h"
#include <iostream>

using namespace std;

int main() {
  Deque d;
  int choice;
  int value;
  int index;
  bool running = true;
  while (running) {
    cout << "-----------------------------------" << endl
	 << "        Welcome to the deque!      " << endl
	 << "       Please enter a command      " << endl
	 << "-----------------------------------" << endl
	 << " 1. push a value to the front      " << endl
	 << " 2. push a value to the back       " << endl
	 << " 3. pop a value from the front     " << endl
	 << " 4. pop a value from the back      " << endl
	 << " 5. print the front value          " << endl
	 << " 6. print the back value           " << endl
	 << " 7. check if empty                 " << endl
	 << " 8. print an index                 " << endl
	 << " 9. print all                      " << endl
	 << "10. print size                     " << endl
	 << "11. exit                           " << endl
	 << "-----------------------------------" << endl
	 << "-----------------------------------" << endl;
    cin >> choice;
    cout << "-----------------------------------" << endl;
    switch (choice) {
    case 1:
      cout << "What value would you like to push? ";
      cin >> value;
      d.push_front(value);
      break;
    case 2:
      cout << "What value would you like to push? ";
      cin >> value;
      d.push_back(value);
      break;
    case 3:
      d.pop_front();
      break;
    case 4:
      d.pop_back();
      break;
    case 5:
      cout << d.front() << endl;
      break;
    case 6:
      cout << d.back() << endl;
      break;
    case 7:
      if (d.empty()) {
	cout << "Empty" << endl;
      }
      else {
	cout << "Not empty" << endl;
      }
      break;
    case 8:
      cout << d[index] << endl;
      break;
    case 9:
      for (int i = 0; i < d.size(); i++) {
	cout << d[i] << endl;
      }
      break;
    case 10:
      cout << d.size() << endl;
      break;
    case 11:
      running = false;
      break;
    }
  }
  return 0;
}

