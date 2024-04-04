#include "../include/city.h"

namespace station_system {
using namespace std;

City city(string_view name) { return make_shared<BaseCity>(name); }

BaseCity::BaseCity(string_view city_name) : _city_name{city_name} {}

const string_view BaseCity::name() const { return _city_name; }

void BaseCity::name(const string_view new_name) { _city_name = new_name; }

void BaseCity::save(ostream &os) { os << _city_name << "\t"; }

void BaseCity::load(istream &is) { is >> _city_name; }
} // namespace station_system
