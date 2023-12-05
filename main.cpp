#include "deque.h"
#include <iostream>

using namespace std;

int main() {
  Deque d; // Crat an instance of the Deque class
  int choice;
  int value;
  int index;
  bool running = true;
  while (running) {
    // Display menu options
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
    cin >> choice; // Get user input for menu choice
    cout << "-----------------------------------" << endl;
    // Process user choice
    switch (choice) {
    case 1:
      cout << "What value would you like to push? ";
      cin >> value;
      d.push_front(value); // Call the push_front method of the Deque class
      break;
    case 2:
      cout << "What value would you like to push? ";
      cin >> value;
      d.push_back(value); // Call the push_back method of the Deque class
      break;
    case 3:
      d.pop_front(); // Call the pop_front method of the Deque class
      break;
    case 4:
      d.pop_back(); // Call the pop_back method of the Deque class
      break;
    case 5:
      cout << d.front() << endl; // Call the front method of the Deque class and print the result
      break;
    case 6:
      cout << d.back() << endl; // Call the back method of the Deque class and print the result
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
      cout << d[index] << endl; // Call the operator[] method of the Deque class and print the result
      break;
    case 9:
      for (int i = 0; i < d.size(); i++) {
	cout << d[i] << endl; // Iterate through the Deque and print each element
      }
      break;
    case 10:
      cout << d.size() << endl; // Call the size method of the Deque class and print the result
      break;
    case 11:
      running = false; // Exit the loop
      break;
    }
  }
  return 0;
}

