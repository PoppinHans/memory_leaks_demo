#include "gtest/gtest.h"
#include "two_pointer_list.h"

TEST(BasicListTest, ShouldDeleteList) {
  List l;
  l.Push(0);
  l.Push(1);
  l.Push(2);
}

TEST(BasicTwoPointerListTest, ShouldDeleteTwoPointerList) {
  List *l = new TwoPointerList();
  auto l1 = static_cast<TwoPointerList *>(l);

  l1->Push(0);
  l1->Push(1);
  l1->Push(2);

  delete l;
}