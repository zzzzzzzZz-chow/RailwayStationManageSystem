#include "include/city.h"
#include "include/time.h"
#include <iostream>

int main() {
  using namespace station_system;
  auto s = city("what");
  std::cout << s->name() << '\n';
  std::cout << s->name() << '\n';
  Time t = time("3:19");
  std::cout << t->time() << '\n';
}
