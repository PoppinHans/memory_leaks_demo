#include <vector>

int main() {
  //1. instance over dynamically allocated memory
  std::vector<int>* v;
  v = new std::vector<int>(1, 0);

  v->emplace_back(1);

  std::vector<int> tmp;
  v->swap(tmp);
  delete v;
  v = nullptr;

  return 0;
}