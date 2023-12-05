#ifndef DEQUE_H
#define DEQUE_H

class Deque {
public:
  Deque();
  ~Deque();
  void push_front(int value);
  void pop_front();
  void push_back(int value);
  void pop_back();
  int front();
  int back();
  bool empty();
  int size();
  int operator[](int index);
private:
  int** block_map;
  int map_size;
  int tot_size;
  const static int block_size = 5;
  int first_block, first_element, last_block, last_element;
};

#endif
