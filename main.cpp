#include "include/route.h"
#include "include/station.h"
#include <iostream>

int main() {
  using namespace station_system;
  auto r = route({station(city("武汉"), time("11:00")),
                  station(city("汉口"), time("11:30"))});
  for (auto station : *r) {
    std::cout << station->city()->name() << '\t' << station->time()->time()
              << '\n';
  }
}
