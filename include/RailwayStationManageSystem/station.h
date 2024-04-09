#pragma once

#include "./city.h"
#include "./time.h"

namespace station_system {
using namespace std;

class BaseStation;
using Station = shared_ptr<BaseStation>;
Station station(const City, const Time, const Time);

class BaseStation {
public:
  BaseStation(const City, const Time, const Time);

public:
  const City city() const;
  void city(const City);
  const Time arrival_time() const;
  const Time departure_time() const;
  void arrival_time(const Time);
  void departure_time(const Time);
  void save(ostream &);
  void load(istream &);

private:
  City _city;
  Time _arrival_time;
  Time _departure_time;
};
} // namespace station_system
