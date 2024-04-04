#pragma once

#include <istream>
#include <memory>
#include <ostream>
#include <string_view>

namespace station_system {
using namespace std;

class BaseCity;
using City = shared_ptr<BaseCity>;
City city(string_view name);

class BaseCity {
public:
  BaseCity(string_view city_name);

public:
  const string_view name() const;
  void name(const string_view new_name);
  void save(ostream &);
  void load(istream &);

private:
  string _city_name;
};

} // namespace station_system
