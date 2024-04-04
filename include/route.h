#pragma once

#include "../include/station.h"
#include <initializer_list>
#include <vector>

namespace station_system {

using Stations = initializer_list<Station>;
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
