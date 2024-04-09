#include "../include/RailwayStationManageSystem/train.h"
#include <memory>

namespace station_system {

Train train(const string_view name, const Route route) {
  return make_shared<BaseTrain>(name, route);
}

BaseTrain::BaseTrain(const string_view code, const Route route)
    : _code{code}, _route{route} {}

const string_view BaseTrain::code() const { return _code; }

void BaseTrain::code(const string_view code) { _code = code; }

const Route BaseTrain::route() const { return _route; }

void BaseTrain::route(const Route route) { _route = route; }

void BaseTrain::save(ostream &os) {
  os << _code << '\t';
  _route->save(os);
}

void BaseTrain::load(istream &is) {
  is >> _code;
  _route->load(is);
}

} // namespace station_system
