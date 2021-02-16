#include "gtest/gtest.h"
#include "list.h"

TEST(BasicListTest, ShouldDeleteList) {
  List l;
  l.Push(0);
  l.Push(1);
  l.Push(2);
}