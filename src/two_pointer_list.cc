#include "two_pointer_list.h"

TwoPointerList::TwoPointerList() {
  left_ = std::make_unique<Node>(0);
  right_ = std::make_unique<Node>(0);
}

TwoPointerList::~TwoPointerList() {
  printf("TwoPointerList destructor triggered.\n");
}
