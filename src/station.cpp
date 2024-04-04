#include "../include/station.h"

namespace station_system {
using namespace std;
Station station(const City city, const Time time) {
  return make_shared<BaseStation>(city, time);
}
BaseStation::BaseStation(const City city, const Time time)
    : _city{city}, _time{time} {}
const City BaseStation::city() const { return _city; }
void BaseStation::city(const City city) { _city = city; }
const Time BaseStation::time() const { return _time; }
void BaseStation::time(const Time time) { _time = time; }
} // namespace station_system
