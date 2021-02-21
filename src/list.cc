#include "list.h"

List::~List() {
//  while(head_)
//    head_ = std::move(head_->next_);

  printf("List destructor triggered.\n");
}

void List::Push(int data) {
  auto temp = std::make_unique<Node>(data);
  if(head_)
    temp->next_ = std::move(head_);

  head_ = std::move(temp);
}
