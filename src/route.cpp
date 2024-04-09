#include "../include/RailwayStationManageSystem/route.h"
#include <memory>

namespace station_system {

using namespace std;

Route route(Stations stations) { return make_shared<BaseRoute>(stations); }

BaseRoute::BaseRoute(Stations stations) {
  for (auto &i : stations)
    _route.push_back(i);
}

BaseRoute::Iterators BaseRoute::iterators() const { return _route; }

void BaseRoute::save(ostream &os) {
  os << _route.size() << '\t';
  for (auto &i : _route)
    i->save(os);
}
void BaseRoute::load(istream &is) {
  size_t n;
  is >> n;
  for (int i = 0; i < n; ++i) {
    auto s = station(city(""), time(""), time(""));
    s->load(is);
    _route.push_back(s);
  }
}

} // namespace station_system
