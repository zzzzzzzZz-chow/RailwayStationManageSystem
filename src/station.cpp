#include "../include/station.h"

namespace station_system {
using namespace std;

Station station(const City city, const Time arrival_time,
                const Time departure_time) {
  return make_shared<BaseStation>(city, arrival_time, departure_time);
}

BaseStation::BaseStation(const City city, const Time arrival_time,
                         const Time departure_time)
    : _city{city}, _arrival_time{arrival_time},
      _departure_time{departure_time} {}

const City BaseStation::city() const { return _city; }

void BaseStation::city(const City city) { _city = city; }

const Time BaseStation::arrival_time() const { return _arrival_time; }

const Time BaseStation::departure_time() const { return _departure_time; }

void BaseStation::arrival_time(const Time time) { _arrival_time = time; }

void BaseStation::departure_time(const Time time) { _departure_time = time; }

void BaseStation::save(ostream &os) {
  _city->save(os);
  _arrival_time->save(os);
  _departure_time->save(os);
}

void BaseStation::load(istream &is) {
  _city->load(is);
  _arrival_time->load(is);
  _departure_time->load(is);
}

} // namespace station_system
