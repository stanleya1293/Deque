#include "deque.h"
#include <iostream>

Deque::Deque() {
  // Initialize the deque with initial values
  map_size = 2;
  block_map = new int* [map_size];
  block_map[0] = new int [block_size];
  block_map[1] = new int [block_size];
  first_block = 0;
  first_element = block_size - 1;
  last_block = 1;
  last_element = 0;
  tot_size = 0;
}

Deque::~Deque() {
  // Destructor to release memory
  for (int i = 0; i < map_size; i++) {
    delete block_map[i];
  }
  delete block_map;
}

void Deque::push_front(int value) {
  // Check if the current block is full
  if (!block_map[first_block][first_element]) {
    block_map[first_block][first_element] = value;
    tot_size++;
  }
  // Check if there is space in the current block to insert at the front
  else if (first_element > 0) {
    first_element--;
    block_map[first_block][first_element] = value;
    tot_size++;
  }
  else {
    //used to resize if necessary
    int** new_map = new int* [map_size + 1];
    for (int i = 1; i <= map_size; i++) {
      new_map[i] = block_map[i - 1];
    }
    new_map[0] = new int [block_size];
    first_element = 4;
    first_block = 0;
    new_map[first_block][first_element] = value;
    delete [] block_map;
    block_map = new_map;
    tot_size++;
  }
}

void Deque::pop_front() {
  // Remove the front element and update indices
  block_map[first_block][first_element] = NULL;
  first_element++;
  if (first_element = 5) {
    first_block++;
    
  }
  tot_size--;
}

void Deque::push_back(int value) {
  // Check if the current block is full
  if (!block_map[last_block][last_element]) {
    block_map[last_block][last_element] = value;
    tot_size++;
  }
  // Check if there is space in the current block to insert at the back
  else if (last_element < 5) {
    last_element++;
    block_map[last_block][last_element] = value;
    tot_size++;
  }
  else {
    //resize
    int** new_map = new int* [map_size + 1];
    for (int i = 0; i < map_size; i++) {
      new_map[i] = block_map[i];
    }
    new_map[map_size + 1] = new int [block_size];
    last_block++;
    last_element = 0;
    new_map[last_block][last_element] = value;
    delete [] block_map;
    block_map = new_map;
    tot_size++;
  }
}

void Deque::pop_back() {
  // Remove the back element and update indices
  block_map[last_block][last_element] = NULL;
  last_element--;
  if (last_element < 0) {
    last_element = 0;
    last_block--;
  }
  tot_size--;
}

int Deque::front() {
  // Return the front element
  return (block_map[first_block][first_element]);
}

int Deque::back() {
  // Return the back element
  return (block_map[last_block][last_element]);
}

bool Deque::empty() {
  // Check if the deque is empty
  if (!block_map[first_block][first_element] && !block_map[last_block][last_element])
    return true;
  else
    return false;
}

int Deque::size() {
  // Return the total size of the deque
  return tot_size;
}

int Deque::operator[](int index) {
  // Retrieve the element at the given index
  int block, element;
  block = first_block + ((first_element + index) / block_size);
  element = (first_element + index) % block_size;
  return (block_map[block][element]);
}
