#pragma once

#include <memory>
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

private:
  string_view _city_name;
};

} // namespace station_system
