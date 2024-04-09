#pragma once

#include "../include/route.h"

namespace station_system {

class BaseTrain;
using Train = shared_ptr<BaseTrain>;
Train train(const string_view, const Route);

class BaseTrain {
public:
  BaseTrain(const string_view, const Route);
  const string_view code() const;
  void code(const string_view);
  const Route route() const;
  void route(const Route);
  void save(ostream &);
  void load(istream &);

private:
  string _code;
  Route _route;
};

} // namespace station_system
