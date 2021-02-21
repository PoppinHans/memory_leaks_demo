#ifndef MEMORY_LEAK_DEMO_LIST_H
#define MEMORY_LEAK_DEMO_LIST_H

#include <memory>

class List {
public:
  struct Node {
    int data_;
    std::unique_ptr<Node> next_;
    Node(int data) : data_{data}, next_{nullptr} {}
  };

  List() : head_(nullptr) {}
  virtual ~List();

  void Push(int data);

protected:
  std::unique_ptr<Node> head_;
};

#endif //MEMORY_LEAK_DEMO_LIST_H
