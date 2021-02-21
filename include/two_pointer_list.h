#ifndef MEMORY_LEAK_DEMO_TWO_POINTER_LIST_H
#define MEMORY_LEAK_DEMO_TWO_POINTER_LIST_H

#include "list.h"

class TwoPointerList : public List {
public:
  TwoPointerList();

  virtual ~TwoPointerList();

private:
  std::unique_ptr<Node> left_;
  std::unique_ptr<Node> right_;
};

#endif //MEMORY_LEAK_DEMO_TWO_POINTER_LIST_H
