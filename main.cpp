#include "./include/train.h"
#include "include/route.h"
#include "include/station.h"
#include <iostream>

int main() {
  using namespace station_system;
  auto t = train("K123", route({station(city("武汉"), time("11:00")),
                                station(city("汉口"), time("11:30"))}));
  std::cout << t->code() << '\n';
  for (auto station : t->route()->iterators()) {
    std::cout << station->city()->name() << '\t' << station->time()->time()
              << '\n';
  }
}
