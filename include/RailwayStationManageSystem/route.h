#pragma once

#include "./station.h"
#include <vector>

namespace station_system {

using Stations = vector<Station>;
using StationIterator = vector<Station>::const_iterator;
class BaseRoute;
using Route = shared_ptr<BaseRoute>;
Route route(Stations);

class BaseRoute {
  using Iterators = vector<Station>;

public:
  BaseRoute(Stations);
  Iterators iterators() const;
  void save(ostream &);
  void load(istream &);

private:
  vector<Station> _route;
};
} // namespace station_system
