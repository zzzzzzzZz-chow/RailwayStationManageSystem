#include "../include/route.h"
#include <memory>

namespace station_system {

using namespace std;

Route route(Stations stations) { return make_shared<BaseRoute>(stations); }

BaseRoute::BaseRoute(Stations stations) {
  for (auto &i : stations)
    _route.push_back(i);
}

BaseRoute::Iterators BaseRoute::iterators() const { return _route; }

} // namespace station_system
