#ifndef DEQUE_H
#define DEQUE_H

class Deque {
public:
  Deque();
  ~Deque();
  void push_front(int value);
  void pop_front(int value);
  void push_back(int value);
  void pop_back(int value);
  int front();
  int back();
  bool empty();
  int size();
  int operator[](int index);
private:
  int** blockmap;
};

#endif
