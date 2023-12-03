#include "deque.h"
#include <iostream>

Deque::Deque() {
  int map_size = 2;
  block_map = new int* [map_size];
  block_map[0] = new int [block_size];
  block_map[1] = new int [block_size];
  first_block = 0;
  first_element = block_size;
  tot_size = 0;
}

Deque::~Deque() {
  
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

void Deque::pop_front(int value) {
  block_map[first_block][first_element] = NULL;
  first_element++;
  tot_size--;
}

void Deque::push_back(int value) {
  if (!block_map[])
}

void Deque::pop_back(int value) {

}

int Deque::front() {

}

int Deque::back() {

}

bool Deque::empty() {

}

int Deque::size() {
  return tot_size;
}

int Deque::operator[](int index) {
  
}
