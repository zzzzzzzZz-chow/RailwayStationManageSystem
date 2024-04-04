#include "include/station.h"
#include <iostream>

int main() {
  using namespace station_system;
  auto s = station(city("武汉"), time("15:00"));
  std::cout << s->city()->name() << '\n';
  std::cout << s->time()->time() << '\n';
}
