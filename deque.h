#ifndef DEQUE_H
#define DEQUE_H

class Deque {
public:
  // Constructor
  Deque();
  // Deconstructor
  ~Deque();
  
  void push_front(int value); // Add an element to the front of the deque
  void pop_front(); // Remove an element from the front of the deque
  void push_back(int value); // Add an element to the back of the deque
  void pop_back(); // Remove an element from the back of the deque
  int front(); // Get the value at the front of the deque
  int back(); // Get the value at the back of the deque
  bool empty(); // Check if the deque is empty
  int size();// Get the size of the deque
  int operator[](int index);  // Overloaded operator to access elements by index
  
private:
  int** block_map; // 2D array to store deque elements
  int map_size; // Size of the block_map array
  int tot_size; // Total number of elements in the deque
  const static int block_size = 5; // Constant representing the size of each block in the block_map
  int first_block, first_element, last_block, last_element; //// Indices to keep track of the first and last blocks and elements in the deque
};

#endif
