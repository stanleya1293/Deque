#include "deque.h"
#include <iostream>

Deque::Deque() {
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
  for (int i = 0; i < map_size; i++) {
    delete block_map[i];
  }
  delete block_map;
}

void Deque::push_front(int value) {
  if (!block_map[first_block][first_element]) {
    block_map[first_block][first_element] = value;
    tot_size++;
  }
  else if (first_element > 0) {
    first_element--;
    block_map[first_block][first_element] = value;
    tot_size++;
  }
  else {
    //resize
    
  }
}

void Deque::pop_front() {
  block_map[first_block][first_element] = NULL;
  first_element++;
  tot_size--;
}

void Deque::push_back(int value) {
  if (!block_map[last_block][last_element]) {
    block_map[last_block][last_element] = value;
    tot_size++;
  }
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
  block_map[last_block][last_element] = NULL;
  last_element--;
  tot_size--;
}

int Deque::front() {
  return (block_map[first_block][first_element]);
}

int Deque::back() {
  return (block_map[last_block][last_element]);
}

bool Deque::empty() {
  if (!block_map[first_block][first_element] && !block_map[last_block][last_element])
    return true;
  else
    return false;
}

int Deque::size() {
  return tot_size;
}

int Deque::operator[](int index) {
  int block, element;
  block = first_block + ((first_element + index) / block_size);
  element = (first_element + index) % block_size;
  return (block_map[block][element]);
}
